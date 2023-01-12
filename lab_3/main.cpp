#include <iostream>
#include "Numberlist.h"

int main(int argc, char** argv) {
  Numberlist n;
  int f[] = {17, 32, 28, 7, 46, 9, 11};
  n.setNumber(f, 7);
  std::cout << "The number average is " << n.average() << std::endl;
  n.descending();
  // n.ascending();
  n.list_number();
}