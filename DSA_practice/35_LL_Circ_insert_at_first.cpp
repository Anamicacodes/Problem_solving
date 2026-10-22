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
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements : " << endl;
    for(int i=0;i<n;i++){
        int value;
        cout << "Element " << i+1 << " : ";
        cin >> value;

        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if(head==NULL){
            head= newNode;
            tail= newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    tail->next = head;
    Node* temp = head ;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    }while(temp!=head);

    int value;
    cout << "Enter the data of the new node to be inserted : ";
    cin >> value;
    //inserting new node
    Node* insert_node = new Node();
    insert_node->data = value;
    insert_node->next = head;
    tail->next = insert_node;
    head = insert_node; 

    temp = head ;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    }while(temp!=head);
    
}