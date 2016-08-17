#ifndef DATA_STRUCTURES_QUEUE_H
#define DATA_STRUCTURES_QUEUE_H
#include "DataStructure.h"

class Queue : public DataStructure {
public:
    explicit Queue( int* myHeadPtr, int value );
    ~Queue();

    virtual void addItem( int item ) override;
    virtual int getItem( int index ) const override;
    virtual void removeItem( int index );

private:
    int* tailPtr;
};

#endif //DATA_STRUCTURES_QUEUE_H
