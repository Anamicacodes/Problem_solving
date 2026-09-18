#include <iostream>
using namespace std;
int main(){
    int n;
    int arr[100];
    cout << "Enter the number of elements : ";
    cin >> n ;
    cout << "Enter " << n<< " elements : ";
    for(int i=0; i<n; i++ ){
        cin >> arr[i];
    }
    int pos,value;
    cout <<"Enter the position where you want to enter the element : ";
    cin >> pos;
    cout << "Enter the element value that you want to enter : ";
    cin >> value;
    
    for(int i= n; i > pos; i--){
        arr[i]=arr[i-1];
    }
    arr[pos] = value;

    n++;
    cout << "Array after insertion : " ;
    for(int i=0; i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}