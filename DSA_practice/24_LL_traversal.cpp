#include <iostream>
using namespace std;
struct Node(){
    int data;
    Node* next;
}
int main(){
    Node* head = new Node();
    Node* node2 = new Node();
    head->data =10;
    head->next = node2;
    noode2->data = 20;
    head->next = NULL;
}