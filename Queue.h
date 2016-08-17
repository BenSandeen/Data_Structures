#ifndef DATA_STRUCTURES_QUEUE_H
#define DATA_STRUCTURES_QUEUE_H
#include "DataStructure.h"
#include <vector>

class Queue : public DataStructure {
public:
    explicit Queue( int* myHeadPtr, int value );
    ~Queue();

    virtual void addItem( int item ) override;
    virtual int getItem( int index ) const override;
    virtual void removeItem( int index );

    void setTailPtr( int* );
    int* getTailPtr();
    void incrementTailPtr();
    void decrementTailPtr();

private:
    int* tailPtr;
    std::vector< int > queue[10];
};

#endif //DATA_STRUCTURES_QUEUE_H
