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

    public:
    Stack(){
        top = NULL; //initialize the stack with a null top pointer
    }

    //push operation insert an element onto the top os stack
    int push(int value){
    
