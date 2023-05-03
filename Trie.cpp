#include "Trie.h"

Trie::Trie() {
    root = new TrieNode();
}

void Trie::insert(std::string word) {
    TrieNode* node = root;
    for (char c : word) {
        int index = c - 'a';
        if (node->children[index] == nullptr) {
            node->children[index] = new TrieNode();
        }
        node = node->children[index];
    }
    node->is_word = true;
}

std::vector<std::string> Trie::search(std::string prefix) {
    TrieNode* node = root;
    std::vector<std::string> words;
    for (char c : prefix) {
        int index = c - 'a';
        if (node->children[index] == nullptr) {
            return words;
        }
        node = node->children[index];
    }
    searchWords(node, prefix, words);
    return words;
}

void Trie::searchWords(TrieNode* node, std::string prefix, std::vector<std::string>& words) {
    if (node->is_word) {
        words.push_back(prefix);
    }
    for (int i = 0; i < 26; i++) {
        if (node->children[i] != nullptr) {
            char c = 'a' + i;
            searchWords(node->children[i], prefix + c, words);
        }
    }
}
