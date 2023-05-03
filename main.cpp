#include <iostream>
#include <vector>
#include <string>
#include "Trie.h"

int main() {

    setlocale(LC_ALL, "ru_RU");

    // ������� � ��������� �������
    Trie trie;
    trie.insert("apple");
    trie.insert("banana");
    trie.insert("bear");
    trie.insert("cherry");
    trie.insert("grape");
    trie.insert("lemon");
    trie.insert("orange");
    trie.insert("pear");
    //trie.insert("������"); 
    //trie.insert("������"); 
    //trie.insert("�����");

    // ���������� �������� ���� �� ��������� �����
    std::string prefix;
    while (true) {
        std::cout << "������� ����� �����: ";
        std::cin >> prefix;
        std::vector<std::string> words = trie.search(prefix);
        std::cout << "��������: ";
        for (std::string word : words) {
            std::cout << word << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
