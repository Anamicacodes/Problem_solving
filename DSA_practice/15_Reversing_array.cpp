#include <iostream>
using namespace std;
int main(){
    int n;
    int arr[100];
    cout << "Enter n:" ;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int start =0;
    int end = n-1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for(int i=0 ;i<n ;i++ ){
        cout << arr[i] <<" ";
    }
}