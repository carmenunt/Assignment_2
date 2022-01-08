#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "File.hpp"
#include "List.hpp"

using namespace std;
List File::readFile(string fileName)
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
        return newList;

    }
    else cout << "Could not access file.";



}