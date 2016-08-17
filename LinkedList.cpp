#include "LinkedList.h"
using namespace std;

LinkedList::LinkedList( int* myHeadPtr, int value )
        : DataStructure( myHeadPtr, value )
{

}

LinkedList::~LinkedList() {
    setHeadPtr( nullptr );
    setSize(0);
}

void LinkedList::addItem( int item ) {
    cout << "in LinkedList's addItem() function" << endl;
}

void LinkedList::removeItem( int item ) {

}

int LinkedList::getItem( int index ) const {
    //TODO: loop through linkedlist until item is found
}