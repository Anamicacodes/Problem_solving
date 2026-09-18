#include <iostream>
using namespace std;
int main(){
    int n;
    int arr[100];
    cout << "Enter the number of elements: ";
    cin >> n;
    for(int i=0; i<n;i++){
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target element: ";
    cin >>  target;

    int index=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            index =i;
        }
    }
    
    if(index!= -1){
        cout << "Element found at index "<<index;
    }
    else {
        cout << "Element not found!";
    }
    return 0;
}