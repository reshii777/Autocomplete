#ifndef TRIE_H
#define TRIE_H

#include <vector>
#include <string>

struct TrieNode {
    std::vector<TrieNode*> children;
    bool is_word;
    TrieNode() : is_word(false) {
        children.resize(26, nullptr);
    }
};

class Trie {
public:
    Trie();
    void insert(std::string word);
    std::vector<std::string> search(std::string prefix);
private:
    TrieNode* root;
    void searchWords(TrieNode* node, std::string prefix, std::vector<std::string>& words);
};

#endif // TRIE_H
