#include "XOR_LinkedList.hpp"
#include <iostream>

template <typename T>
void print_XOR_LinkedList(XOR_LinkedList<T> lst){
  for(int i=0;i<lst.Count();++i){
    std::cout<<lst.get(i)<<"  ";
  }
  std::cout<<std::endl;
  return;
}

template <typename T>
XOR_LinkedList<T> get_list(){
  XOR_LinkedList<T> lst = {1,2,3,4,5,6,7,8,9,10};
  return lst;
}

int main(int argv,char** argc){
  XOR_LinkedList<int> lst = {1,2,3,4,5,6,7,8,9,10};
  print_XOR_LinkedList<int>(lst);
  XOR_LinkedList<int> lst0 = lst;
  print_XOR_LinkedList<int>(lst0);
  XOR_LinkedList<int> lst2(get_list<int>());
  print_XOR_LinkedList<int>(lst2);
  lst2.del(0);
  print_XOR_LinkedList<int>(lst2);
  lst2.del(4);
  print_XOR_LinkedList<int>(lst2);
  lst2.del(7);
  print_XOR_LinkedList<int>(lst2);
  return 0;
}
