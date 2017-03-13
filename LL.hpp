#ifndef LL_HPP_
#define LL_HPP_
#include "Node.hpp"
class LL {
 Node *first;
 Node *last;
 int currsize;
 int timestamp;
public:
 LL(); //constructor
 void push(); //adds new node to end of list
 void delete(int i); // removes the ith node from the list
 void printList(); // prints out the entire list
};
#endif /* LL_HPP_ */