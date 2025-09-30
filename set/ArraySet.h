#ifndef ARRAYSET_H
#define ARRAYSET_H
#include "ISet.h"
class ArraySet: public ISet(){
  int *ptr = nullptr;
  int size;
  int nextFree;
  public:
    ArraySet(int);
    void insert(int);
    void remove(int);
    bool contains(int);
    bool isEmpty();
};

#endif // !ARRAYSET_H

