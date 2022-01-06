#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "File.hpp"

using namespace std;

void File::readFile(string fileName)
{
    ifstream MyReadFile;

    MyReadFile.open("dictionary.txt",ios::in);
    vector<string> v (57000);
    string myText;
    if (MyReadFile.is_open())
    {
        int i = 0;
        while (getline (MyReadFile, myText)) {
            MyReadFile >> v[i];
            i++;
        }
        MyReadFile.close();
    }
    else cout << "Could not access file.";

    for (int i = 0; i < 57000; i++)
    {
        cout << v[i] << " ";
    }



}