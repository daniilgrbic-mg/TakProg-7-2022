#include <iostream>
#include <string>
#include <map>

using namespace std;

struct Trie {
    bool isWord;
    map <char, Trie*> children;
};

void insert(struct Trie &dictionary, string word) {
    cout << " Ubacujem rec " << word << endl;
    struct Trie* current = &dictionary;
    for (auto c : word) {
        if(current->children.count(c) == 0) {
            // jos nema dete, tj pravimo ga
            // cout << "  Pravim dete za " << c << endl;
            current->children[c] = new Trie();
        }
        // cout << "  Spustam se u " << c << endl;
        current = current->children[c];
    }
    current->isWord = true;
}

bool check(struct Trie &dictionary, string word) {
    struct Trie* current = &dictionary;
    for (auto c : word) {
        if(current->children.count(c) == 0) {
            return false;
        }
        current = current->children[c];
    }
    return current->isWord;
}

int main() {
    
    struct Trie dictionary = Trie();

    insert(dictionary, "cat");
    insert(dictionary, "cane");

    cout << "Check cat " << check(dictionary, "cat") << endl;
    cout << "Check can " << check(dictionary, "can") << endl;

    insert(dictionary, "dog");
    insert(dictionary, "can");

    cout << "Check can " << check(dictionary, "can") << endl;    
}