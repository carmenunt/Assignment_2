#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>


using namespace std;
struct Node {
    char element;
    struct Node* left;
    struct Node* right;


};
struct node* root= nullptr;

int main() {
    vector<string> v (57000);
    ifstream file;
    file.open("C:/Users/bonba/Desktop/CLION PROJECTS/Assignment_2/Dictionary.txt", ios::in);
    if (file.is_open())
    {
        for (int i = 0; i < 57000; i++)
        {
            file >> v[i];
        }
        file.close();
    }
    else cout << "Could not access file.";
    for (int i = 0; i < 57000; i++)
    {
        cout << v[i] << " ";
    }









    int choice = 0;
    while (choice !=5)
    {
        std::cout << "\n1. Dictionary test\n2. Dictionary tree info\n3. String generation\n4. Reverse dictionary\n5. Exit\nPlease enter your choice: ";
        std::cin >> choice;
        switch (choice) {
            case 1:
                // Dictionary test
                char word;
                std::cout << "\nPlease enter a word to be searched: ";
                std::cin >> word;
                // Searching function here...
            case 2:
                // Total number of nodes and max depth
                // In tree class??
            case 3:
                // String generation 50k char
                // A lot of stuff here
                char file;
                std::cout << "\nPlease enter the name of the file: ";
                std::cin >> file;
                // More stuff;
            case 4:
                // Reverse dictionary
            case 5:
                break;
        }


    }
    std::cout << "You have exited" << std::endl;
    return 0;
}
