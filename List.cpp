#include "List.hpp"
#include <iostream>

using namespace std;
List::List()
{
    head = nullptr;
    tail = nullptr;
}


Cell* List::getHead()
{
    return head;
}

void List::insert(string value)
{
    Cell *newCell = new Cell;
    newCell->value = value;
    newCell->next = nullptr;
    if(head == nullptr)
    {
        head = newCell;
        tail = newCell;
    }
    else
    {
        tail->next = newCell;
        tail = tail->next;
    }
}


List::~List()
{

}

