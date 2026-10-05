#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head= new Node();
    Node* node2 = new Node();
    Node* node3 = new Node();
    head->data= 10;
    head->next = node2;
    node2->data = 20;
    node2->next = node3;
    node3->data = 30;
    node3->next = NULL;
    

    Node* temp = head;
    while (temp != NULL ){
        cout << temp->data << " ";
        temp = temp->next;
    }

    //Insertion at beginning : 
    Node* newNode = new Node();
    newNode->data = 5;
    newNode->next = head;
    head = newNode;

    cout << endl;
    //re-print  : 
    temp = head;
    while (temp != NULL ){
        cout << temp->data << " ";
        temp = temp->next;
    }
}