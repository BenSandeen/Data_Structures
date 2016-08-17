#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "DataStructure.h"

template < typename T >
struct Node {
    T value;
    Node* next;
};

class LinkedList : public DataStructure {
public:
    explicit LinkedList( int value );
    ~LinkedList();

    void setPtr( int index, Node<int>* ptr );
    void setValue( int index, int value );
    Node<int>& getNode( int index ) const;
    const Node<int>* getHeadNodePtr() const;

    virtual void addItem( int index ) override;
    virtual int getItem( int index ) const override;
    virtual void removeItem( int index ) override;

private:
    // we inherit headPtr and capacity from DataStructure, so we don't need
    // them here `new` returns pointer to array of 3 Node elements
    // since Node is templated, we must specify the type of data it holds

//    Node<int>* list = new Node<int>[3];
    Node<int> headNode;
    // void* myList;
};
#endif