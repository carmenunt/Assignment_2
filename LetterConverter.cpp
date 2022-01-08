#include "LetterConverter.hpp"
#include <iostream>
#include <regex>

using namespace std;

string LetterConverter::convertAccents(string word)
{
    for (int i = 0; i < word.length(); i++) {
        if (isupper(word[i]))
        {
            word[i] = tolower(word[i]);
        }
    }
    regex regex1("á");
    word = regex_replace(word, regex1, "a");
    regex regex2("é");
    word = regex_replace(word, regex2, "e");
    regex regex3("í");
    word = regex_replace(word, regex3, "i");
    regex regex4("ó");
    word = regex_replace(word, regex4, "o");
    regex regex5("ú");
    word = regex_replace(word, regex5, "u");

    return word;
}