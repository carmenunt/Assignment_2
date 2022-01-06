#ifndef UNTITLED6_LIST_HPP
#define UNTITLED6_LIST_HPP
#include "Cell.hpp"
#include <iostream>

using namespace std;
class List {
    Cell *head;
    Cell *tail;
public:
    List();
    void insert(string value);
    Cell* getHead();
    ~List();
};


#endif //UNTITLED6_LIST_HPP
