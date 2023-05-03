#include <iostream>
#include <vector>
#include <string>
#include "Trie.h"

int main() {

    setlocale(LC_ALL, "ru_RU");

    // Создаем и наполняем словарь
    Trie trie;
    trie.insert("apple");
    trie.insert("banana");
    trie.insert("bear");
    trie.insert("cherry");
    trie.insert("grape");
    trie.insert("lemon");
    trie.insert("orange");
    trie.insert("pear");
    //trie.insert("яблоко"); 
    //trie.insert("персик"); 
    //trie.insert("лимон");

    // Предлагаем варианты слов по введенной части
    std::string prefix;
    while (true) {
        std::cout << "Введите часть слова: ";
        std::cin >> prefix;
        std::vector<std::string> words = trie.search(prefix);
        std::cout << "Варианты: ";
        for (std::string word : words) {
            std::cout << word << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
