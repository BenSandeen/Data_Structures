#include "LinkedList.h"
using namespace std;

LinkedList::LinkedList( int value )
        : DataStructure( nullptr, value )
{
    setHeadPtr( &(headNode.value) );
    setPtr( 0, &(headNode) );
    setValue( 0, value );
}

LinkedList::~LinkedList() {
    setHeadPtr( nullptr );
    setCapacity(0);
}

void LinkedList::setPtr( int index, Node<int>* ptr ) {
    getNode( index ).next = ptr;
}

void LinkedList::setValue( int index, int value ) {
    getNode( index ).value = value;
}

Node<int>& LinkedList::getNode( int index ) const {
    const Node<int>* ptr = getHeadNodePtr();
    Node<int>* tempPtr = (Node<int>*)ptr;
    for ( int i = 0; i < index; i++ ) {
        tempPtr = tempPtr->next;
        cout << "current index: " << i << "  out of " << index << endl;
    }
}

const Node<int>* LinkedList::getHeadNodePtr() const {
    return &headNode;
}

void LinkedList::addItem( int value ) {
    cout << "in LinkedList's addItem() function" << endl;
    Node<int> tailNode = getNode( this->getNumElements() );
    Node<int> newNode;
    newNode.value = value;
    newNode.next = nullptr;
    tailNode.next = &newNode;
}

void LinkedList::removeItem( int index ) {

}

int LinkedList::getItem( int value ) const {
    //TODO: loop through linkedlist until item is found
    int* ptr = getHeadPtr();
//    while ( *ptr != value ) {
//
//    }
}
