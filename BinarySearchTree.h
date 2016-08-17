#ifndef DATA_STRUCTURES_BINARYSEARCHTREE_H
#define DATA_STRUCTURES_BINARYSEARCHTREE_H
#include "DataStructure.h"

class BinarySearchTree : public DataStructure {
public:
    explicit BinarySearchTree( int* myHeadPtr, int value );
    ~BinarySearchTree();

    virtual void addItem( int value ) override;
    virtual int getItem( int index ) const override;
    virtual void removeItem( int index ) override;

private:


};
#endif //DATA_STRUCTURES_BINARYSEARCHTREE_H