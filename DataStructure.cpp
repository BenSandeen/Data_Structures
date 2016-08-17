#include "DataStructure.h"
using namespace std;

DataStructure::DataStructure( int* headPtr, int myCapacity, int myNumElements ) {
    setHeadPtr(headPtr);
    setCapacity(myCapacity);
    setNumElements( myNumElements );
}

DataStructure::~DataStructure() {
    headPtr = nullptr;
    capacity = 0;
}

void DataStructure::setHeadPtr( int* myHeadPtr ) {
    headPtr = myHeadPtr;
}

int* DataStructure::getHeadPtr() const {
    return headPtr;
}

void DataStructure::setCapacity(int myCapacity) {
    capacity = myCapacity;
}

int DataStructure::getCapacity() const {
    return capacity;
}

void DataStructure::incrementCapacity() {
    capacity++;
}

void DataStructure::decrementCapacity() {
    capacity--;
}

void DataStructure::setNumElements( int myNumElements ) {
    numElements = myNumElements;
}

int DataStructure::getNumElements() const {
    return numElements;
}

void DataStructure::incrementNumElements() {

}

void DataStructure::decrementNumElements() {

}

//virtual void DataStructure::addItem( int myItem );