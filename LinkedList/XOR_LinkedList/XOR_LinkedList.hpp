
#include <cstddef>
#include <initializer_list>

template <typename O>
class XOR_LinkedList{
private:
  template<typename T>
  struct Node{
    T val;
    Node* xorptr;
  };
  Node<O>* last;
  Node<O>* first;
  size_t count;
  Node<O>* XOR(Node<O>*,Node<O>*);
  
public:
  XOR_LinkedList();
  XOR_LinkedList(std::initializer_list<O>);
  ~XOR_LinkedList();
  O& get(std::size_t);
  O& operator[](size_t i);
  size_t Count();
  void push_back(O);
  void insert(O,size_t);
};

