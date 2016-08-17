#include "DataStructure.h"
using namespace std;

DataStructure::DataStructure( int* headPtr, int mySize ) {
    setHeadPtr(headPtr);
    setSize(mySize);
}

DataStructure::~DataStructure() {
    headPtr = nullptr;
    size = 0;
}

void DataStructure::setHeadPtr( int* myHeadPtr ) {
    headPtr = myHeadPtr;
}

void DataStructure::setSize(int mySize) {
    size = mySize;
}

int* DataStructure::getHeadPtr() const {
    return headPtr;
}

int DataStructure::getSize() const {
    return size;
}

void DataStructure::incrementSize() {
    size++;
}

void DataStructure::decrementSize() {
    size--;
}

//virtual void DataStructure::addItem( int myItem );