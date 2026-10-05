#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
int main(){
    Node* head = new Node();
    Node* node2 = new Node();
    head->data =10;
    head->next = node2;
    node2->data = 20;
    node2->next = NULL;

    //TRAVERSAL : 
    Node* temp = head;
    while( temp != NULL) {
        cout << temp->data << " " ;
        temp = temp->next;
    }
    
}