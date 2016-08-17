#ifndef DATASTRUCTURE_H
#define DATASTRUCTURE_H
#include <iostream>

class DataStructure {
public:
    explicit DataStructure( int* head, int size );
    ~DataStructure();

    void setHeadPtr( int* myHeadPtr );
    void setSize( int mySize );
    void incrementSize();
    void decrementSize();
    int* getHeadPtr() const;
    int getSize() const;

    virtual int getItem( int index ) const = 0;
    virtual void addItem( int item ) = 0;
    virtual void removeItem( int index ) = 0;
private:
    int* headPtr;
    int size;
};
#endif //DATASTRUCTURE_H