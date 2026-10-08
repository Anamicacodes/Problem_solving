#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    cout << "Enter the elements : " << endl;
    for(int i=0; i<n; i++ ){
        int value;
        cout << "Element " << i+1 << " : ";
        cin >> value;

        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    //traversal : 
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}