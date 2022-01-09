#include <iostream>
#include <sstream>
#include <fstream>
#include "File.hpp"
#include "Tree.hpp"


using namespace std;

int main() {

    string fileName;

    cout << "Enter filename: ";
    cin >> fileName;

    File file;

    List listDic = file.readFile(fileName);
    Tree newTree;
    TrieNode *root = newTree.getNode();


    Cell* element = listDic.getHead();
    while (element != nullptr)
    {
        newTree.insert(root, element->value);
        element = element->next;
    }

    if(newTree.search(root, "adrian"))
    {
        cout << "Yes\n";
    } else{
        cout << "No\n";
    }
    if(newTree.search(root, "desmanear"))
    {
        cout << "Yes\n";
    } else{
        cout << "No\n";
    }


//    int choice = 0;
//    while (choice !=5)
//    {
//        std::cout << "\n1. Dictionary.txt test\n2. Dictionary.txt tree info\n3. String generation\n4. Reverse dictionary\n5. Exit\nPlease enter your choice: ";
//        std::cin >> choice;
//        switch (choice) {
//            case 1:
//                // Dictionary.txt test
//                char word;
//                std::cout << "\nPlease enter a word to be searched: ";
//                std::cin >> word;
//                // Searching function here...
//            case 2:
//                // Total number of nodes and max depth
//                // In tree class??
//            case 3:
//                // String generation 50k char
//                // A lot of stuff here
//                char file;
//                std::cout << "\nPlease enter the name of the file: ";
//                std::cin >> file;
//                // More stuff;
//            case 4:
//                // Reverse dictionary
//            case 5:
//                break;
//        }
//
//
//    }
//    std::cout << "You have exited" << std::endl;
    return 0;
}
