#include <iostream>
using namespace std;
struct Node {
    int data;     //data and next are simple member names and not  keywords
    Node* next;
};
int main(){
    Node* newNode = new Node();  
                                // newNode is a simple vaariable a
                                // new is a keyword
    newNode->data = 10;    //go to the node pointed by newNode and access its data
    newNode->next = NULL;  // node currently does not point to any further node
    cout << newNode << endl;       //prints address stored in newNode
    cout << newNode->data;         //prints 10
}
//Nodes ghave dynamic memory allocation so during run time we can ask for a memory space for a new node
