#include <iostream>
using namespace std;

//node class representing a single node in the linked list
class Node{
    public:
   int data;
   Node* next;

    Node(){
        next = NULL;
    }
};

//STACK CLASS
class Stack {
    private:
    Node* top; //pointer to the top node of the stack

    
