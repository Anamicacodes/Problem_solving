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
    Node* node4 = new Node();

    head->data =10;
    head->next = node2;
    node2->data = 20;
    node2->next = node3;
    node3->data = 30;
    node3->next = node4;
    node4->data = 40;
    node4->next = NULL;

    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\nAfter deletion : ";
    temp = head;
    //deletion at first :
    head = head->next;    //prefer the general form instead of writing node2
    delete temp;

    temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}