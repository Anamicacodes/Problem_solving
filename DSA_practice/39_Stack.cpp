#include <iostream>
using namespace std;

void push(int stack[], int &top, int size, int value){
    if (top == size-1)cout << "Stack Overflow";
    else {
        top++;
        stack[top] = value;
    }
}
void pop(int stack[], int &top){
    if(top == -1) cout << "Stack Underflow";
    else {
        cout << "\nDeleted element : " << stack[top] << "\n";
        top--;
    }
}
void display (int stack[], int top){
    if(top == -1) cout << "Stack is empty.";
    else for(int i=top; i>=0; i--) cout << stack[i] <<  " ";
}
int main(){
    int stack[5];
    int top = -1;

    push(stack, top, 5, 10);
    push(stack, top, 5, 20);
    push(stack, top, 5, 30);

    display(stack, top);
    pop(stack, top);
    cout << "Remaining elements of the stack are: \n";
    display(stack, top);
    return 0;
}