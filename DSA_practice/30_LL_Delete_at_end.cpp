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

    //printing linked list before deletion 
    Node* temp = head;  
    while (temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    if(head == NULL){
        cout << "List is empty";
    }
    else if (head->next == NULL) {
        delete head;
        head = NULL;
    }
    else {
    //travering to last element for deletion : 
    temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    //now store the last element and create null to the second last(breaking last connection)
    Node* last = temp->next;
    temp->next = NULL;
    delete last;

}
    cout << "After deleting the last element";
    //re-print the deleted list:
    temp =head;
    while (temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }    
}