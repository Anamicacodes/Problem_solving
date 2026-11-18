#include <bits/stdc++.h>
using namespace std;
class Node {
    public : 
        int data;
        Node* left;
        Node* right;
    Node(int value){
        data = value;
        left=NULL;
        right=NULL;
    }
};
vector<int> arr;
void in_order(Node *root) {
    if(root == NULL) return;
    in_order(root->left);
    arr.push_back(root->data);
    in_order(root->right);
}
int main(){
    Node* root = new Node(15);
    root->left = new Node(10);
    root->right = new Node(20);
    root->left->left = new Node(8);
    root->left->right = new Node(12);
    root->right->left = new Node(18);
    root->right->right = new Node(25);
    in_order(root);
    cout<<arr[0]+arr[1];
}