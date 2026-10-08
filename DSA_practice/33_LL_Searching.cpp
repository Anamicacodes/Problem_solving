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

    head->data =10;
    head->next = node2;
    node2->data = 20;
    node2->next = node3;
    node3->data = 30;
    node3->next = NULL;

    int target;
    cout << "Enter target : ";
    cin >> target;
    Node* temp = head;
    int flag =0;
    while( temp!= NULL){
        if(temp->data == target){
            flag = 1;
            break;
        }
        temp = temp->next;
    }
    if (flag ==0){
        cout << "Not found";
    }
    else if(flag ==1) {
        cout << "Found";
    }
}