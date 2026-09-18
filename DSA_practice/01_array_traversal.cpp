#include <iostream>
using namespace std;
int main(){
    int n;
    int arr[100];
    cout << "Enter the number of elements : ";
    cin >> n;
    cout << "Enter " << n << " elements : ";
    for(int i=0; i<n;i++){
        cin >> arr[i];
    }
    cout << "Elements in the array are :";
    for(int i=0; i<n;i++){
        cout << arr[i] << "  ";
    }
    cout <<"Reverse of the array : " ;
    for(int i=n-1;i >=0;i--){
        cout << arr[i] << " ";
    }
}