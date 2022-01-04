#include <iostream>

int main() {
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
