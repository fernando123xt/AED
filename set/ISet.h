#ifndef ISET_H
#define ISET_H
class ISet() {
  public:
    virtual void insert(int) = 0;
    virtual void remove(int) = 0;
    virtual bool contains(int) = 0;
    virtual bool isEmpty() = 0;
};

#endif // !ISET_H
