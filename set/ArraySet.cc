#include "ArraySet.h"
#include <assert.h>
ArraySet::ArraySet(int size){
  ptr = new int(size);
  this->size = size;
  nextFree = 0;
}
void ArraySet::insert(int data){
  assert(nextFree < size);
  if(contains(data)){
    return;
  }
  ptr[nextFree] = data;
  nextFree++;
}
void ArraySet::remove(int data){
  int i=0;
  while(i < nextFree){
    if(ptr[i] == data){
      ptr[i] = ptr[nextFree-1];
      nextFree--;
    }
    i++;
  }
  
}
bool ArraySet::contains(int data){
  int i=0;
  while(i < nextFree){
    if(ptr[i] == data)
      return true;
    i++;
  }
  return false;
}
bool ArraySet::isEmpty(){
  return nextFree == 0;
}
