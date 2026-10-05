#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
int main() {
    Node* head = new Node();
    Node* node2 = new Node();
    Node* node3 = new Node();

    head->data = 10;
    head->next = node2;
    node2->data = 20;
    node2->next = node3;
    node3->data = 30;
    node3->next = NULL;

    Node* temp = head;
    while(temp->next !=NULL){
        temp = temp->next;         //traversing to the last element
    }

    //Insertion at last : 
    Node* last = new Node();
    last->data = 40;
    last->next = NULL;
    temp->next = last;

    cout << endl;
    //printing after inserting at last: 
    temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}