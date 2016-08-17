#ifndef DATA_STRUCTURES_QUEUE_H
#define DATA_STRUCTURES_QUEUE_H
#include "DataStructure.h"
#include <vector>

class Queue : public DataStructure {
public:
    explicit Queue( int* myHeadPtr, int value );
    ~Queue();

    void setTailPtr( int* );
    int* getTailPtr();
    void incrementTailPtr();
    void decrementTailPtr();

    virtual void addItem( int value ) override;
    virtual int getItem( int index ) const override;
    virtual void removeItem( int index );

private:
    int* tailPtr;
    std::vector< int > queue[10];
};
#endif //DATA_STRUCTURES_QUEUE_H