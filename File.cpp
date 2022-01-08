#include <iostream>
#include <fstream>
#include <string>
#include "File.hpp"
#include "List.hpp"
#include "LetterConverter.hpp"

using namespace std;

void File::readFile(string fileName)
{
    LetterConverter converter;
    ifstream MyReadFile(fileName);

    List newList;
    string myText;
    if (MyReadFile.is_open())
    {
        while (getline (MyReadFile, myText)) {
            string word;
//            Problem here!!! It skips the first line
            MyReadFile >> word;
            word = converter.convertAccents(word);
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