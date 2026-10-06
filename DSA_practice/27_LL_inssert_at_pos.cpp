#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
int main(){
    Node* head = new Node();
    Node* node2 = new Node();
    Node* node3 = new Node();

    head->data = 10;
    head->next = node2;
    node2->data = 20;
    node2->next = node3;
    node3->data = 30;
    node3->next = NULL;

    //traversing to the element before the postion where we want to insert the element:
    int pos;
    cin>> pos;
    Node* temp = head;
    for(int i=1; i<pos-1 ; i++){  //for pos =2 the loop immidiately stops and the temp 
       temp = temp->next ;        //remains on the first element which is perfect to add an element next to it
    }

    //creating thoe new node to insert 
    Node* newNode = new Node();
    newNode->data = 15;
    newNode->next = temp->next;
    temp->next = newNode;

    temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }

}