#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "DataStructure.h"

template < typename T >
struct Node {
    T value;
    T* next;
};

class LinkedList : public DataStructure {
public:
    explicit LinkedList( int* myHeadPtr, int value );
    ~LinkedList();

    virtual void addItem( int item ) override;
    virtual int getItem( int index ) const override;
    virtual void removeItem( int index ) override;

private:
    // we inherit headPtr and size from DataStructure, so we don't need them here
    // `new` returns pointer to array of 3 Node elements
    // since Node is templated, we must specify the type of data it will hold

    Node<int>* list = new Node<int>[3];
    void* myList;
};
#endif