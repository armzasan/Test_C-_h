#ifndef NUMBERLIST_H
#define NUMBERLIST_H

class Numberlist {
 private:
  int* n;
  int size;

 public:
  Numberlist();
  void setNumber(int n[], int size);
  float average();
  void descending();
  void ascending();
  void list_number();
};

#endif