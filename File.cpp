#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "File.hpp"
#include "List.hpp"

using namespace std;

void File::readFile(string fileName)
{
    ifstream MyReadFile;

    MyReadFile.open("dictionary.txt",ios::in);
    List newList;
    string myText;
    if (MyReadFile.is_open())
    {
        while (getline (MyReadFile, myText)) {
            string word;
            MyReadFile >> word;
            newList.insert(word);
        }
        MyReadFile.close();
    }
    else cout << "Could not access file.";
    Cell * element = newList.getHead();
    while (element != nullptr)
    {
        cout << element->value << " ";
        element = element->next;
    }



}