//Leetcode 20:
#include <iostream>
#include <string>
#include <stack>
using namespace std;
//telling if  " ( ( ) ( ))" is balanced 
int main(){
    stack<char> st;
    string str = "(()())";
    //cout << len(str);

    /* for (char c :str){
        if( c = '(' ){
            st.push('(');
        }
        else if (c = ')' {
            if(st.empty()){
                cout<< "Invalid."
                return 0;
                }
            else st.pop();
        }
    }
        
        */
    for(int i=0;i<6;i++){
        if(str[i] == '('){
        st.push(str[i]);
        }
        else if (str[i] == ')'){
            if(st.empty()){
                cout << "Stack is empty";
                return 0;
            }
            else {
                st.pop();
            }
        }
    }
    if(st.empty()) {
        cout << "Valid.";
    }
    else {
        cout << "Invalid.";
    }
}