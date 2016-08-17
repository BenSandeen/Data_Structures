#include "Queue.h"
using namespace std;

Queue::Queue( int* myHeadPtr, int value )
        : DataStructure( myHeadPtr, value )
{

}

Queue::~Queue() {
    setHeadPtr(nullptr);
    setTailPtr(nullptr);
    setCapacity(0);
}

void Queue::addItem( int value ) {
//    queue.
}

int Queue::getItem( int index ) const {

}

void Queue::removeItem( int index ) {

}

void Queue::setTailPtr( int* ptr ) {

}

int* Queue::getTailPtr() {

}

void Queue::incrementTailPtr() {

}

void Queue::decrementTailPtr() {

}