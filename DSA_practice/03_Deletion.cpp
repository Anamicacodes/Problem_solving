#include <iostream>
using namespace std;
int main(){
    int n;
    int arr[100];
    cout << "Enter the number of elements: ";
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int pos;
    cout << "Enter the position at which you want to delete the element : ";
    cin >> pos;
    if(pos < 0 || pos>= n){
        cout << "Invalid position";
        return 0;
    }
    for(int i=pos; i<n-1;i++){
        arr[i] = arr[i+1];
    }
    n--;
    cout << "Array after deletion : " ;
    for(int i=0;i <n ; i++){
        cout << arr[i] << " ";
    }
    return 0;
}