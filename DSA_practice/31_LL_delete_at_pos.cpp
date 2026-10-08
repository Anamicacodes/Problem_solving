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

    head->data = 10;
    head->next = node2;
    node2->data = 20;
    node2->next = node3;
    node3->data = 30;
    node3->next = NULL;

    //printing before deleting : 
    Node* temp = head;
    while (temp != NULL){
        cout << temp->data << " ";
        temp = temp->next ;
    }

    temp = head;
    
    int pos;
    cin >> pos;
    //travelling to the element just before the one to be deleted
    for(int i=1; i<pos-1 ;i++){
        temp = temp->next;
    }

    if(pos ==1) {
        Node* ele = head;
        head = head->next;
        delete ele;
    }
    else {
    //store the deleteing element somewhere before breaking the connection : 
    Node* ele = temp->next ;
    temp->next = temp->next->next;
    delete ele;
    }
    temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}