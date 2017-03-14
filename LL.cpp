#include <iostream>
#include <stdlib.h>
using namespace std;
#include "Node.hpp"
#include "LL.hpp"
LL::LL() {
first = NULL;
last = NULL;
currsize = 0;
}
void LL::push() {
// this function creates a new Node, then adds the node to the end of the list and updates //the last pointer.
//Note: you’ll want to check to see if this is the very first node being added to the list, //in which case you’ll want to
//create the new node, and then make sure that both the first //and the last pointer point to it.
    Node *n = new Node;
    if(first == NULL) {
        first = n;
    }else {
        n = first;
        first = n;
    }
}
void LL::delete(int i) {
// this method starts at the first node in the list and counts to i-1. It then deletes the //node at location i. Note that
//you must make node at i-1 point to node at i+1, and you //must decrease the size of the list. If you are deleting the
//0th element, you must first //set first to the node at 2 before deleting node 1. Equally, if you are deleting the last
//node, you must make the new last node be the node at i-1.
//You must delete your node at i.
}

void LL::printList() {
// Make sure you can write a method that prints out every node in the linked list
    Node *tmp = first;
	while (tmp != NULL) {
		cout << tmp->data << "->";
		tmp = tmp->next;
	}
	cout << endl;

}