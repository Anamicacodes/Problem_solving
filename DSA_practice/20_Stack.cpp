#include <iostream>
#include <stack>
using namespace std;
//Chrome browser uses stack structure 
//we can access only top element
//No indexing 
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    for(int i=3;i<=7;i++){
        st.push(i);
    }
    cout << st.top() << endl;
    st.pop();
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
}