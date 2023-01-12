#include "Numberlist.h"
#include <iostream>
using namespace std;

Numberlist::Numberlist() {
  n = nullptr;
  size = 0;
}

void Numberlist::setNumber(int n[], int size) {
  this->n = n;
  this->size = size;
}

float Numberlist::average() {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += *(this->n + i);
  }
  return (float)sum / size;
}

void Numberlist::descending() {
  int tmp;
  int i, j;
  for (i = 0; i < size; i++) {
    for (j = 0; j < size - 1; j++) {
      if (n[j] < n[j + 1]) {
        tmp = n[j];
        n[j] = n[j + 1];
        n[j + 1] = tmp;
      }
    }
  }
}

void Numberlist::ascending() {
  int tmp;
  int i, j;
  for (i = 0; i < size; i++) {
    for (j = 0; j < size - 1; j++) {
      if (n[j] > n[j + 1]) {
        tmp = n[j];
        n[j] = n[j + 1];
        n[j + 1] = tmp;
      }
    }
  }
}

void Numberlist::list_number() {
  std::cout << "The number sequence is ";
  for (int i = 0; i < size; i++) {
    std::cout << n[i] << " ";
  }
}