#include <iostream>
using namespace std;
/*struct Node {
    int data;
    Node* next;
};
int main(){
    Node* newNode = new Node();
    newNode->data = 10;
    Node* newNode2 = new Node();
    newNode->next = newNode2;
    newNode2->data = 20;
    newNode2->next = NULL;
    cout << "New Node 1 data : " << newNode->data << endl;
    cout << "New Node 2 data : " << newNode2->data;
}
*/
// 5-element linked list : 
struct Node{
    int data;
    Node* next;
};
int main(){
    Node* newNode1 = new Node();
    Node* newNode2 = new Node();
    Node* newNode3 = new Node();
    Node* newNode4 = new Node();
    Node* newNode5 = new Node();

    newNode1->data = 10;
    newNode1->next = newNode2 ;

    newNode2->data = 20;
    newNode2->next = newNode3;

    newNode3->data = 30;
    newNode3->next = newNode4;

    newNode4->data = 40;
    newNode4->next = newNode5 ;

    newNode5->data = 50;
    newNode5->next = NULL;

    cout << "Element 1: " <<newNode1->data << endl;
    cout << "Element 2: " <<newNode2->data << endl;
    cout << "Element 3: " <<newNode3->data << endl;
    cout << "Element 4: " <<newNode4->data << endl;
    cout << "Element 5: " <<newNode5->data << endl;
}