#ifndef DATASTRUCTURE_H
#define DATASTRUCTURE_H
#include <iostream>

class DataStructure {
public:
    explicit DataStructure( int* head, int size = 1, int myNumElements = 0 );
    ~DataStructure();

    void setHeadPtr( int* myHeadPtr );
    int* getHeadPtr() const;
    void incrementHeadPtr();
    void decrementHeadPtr();

    void setCapacity( int myCapacity );
    int getCapacity() const;
    void incrementCapacity();
    void decrementCapacity();

    void setNumElements( int myNumElements );
    int getNumElements() const;
    void incrementNumElements();
    void decrementNumElements();

    virtual int getItem( int index ) const = 0;
    virtual void addItem( int item ) = 0;
    virtual void removeItem( int index ) = 0;

private:
    int* headPtr;
    int numElements;
    int capacity;
};
#endif //DATASTRUCTURE_H