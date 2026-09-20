//for ascending 
#include <iostream>
using namespace std;
int main(){
    int n;
    int arr[100];
    cout << "Enter the number of elements : ";
    cin >> n;
    cout << "Enter " << n << " elements: " ;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int target ;
    cout << "Enter the target element :";
    cin >> target;
    int low =0;
    int high =n-1;
    int index = -1;
    while (low <= high){
        int mid = low + (high - low)/2; 
        if (arr[mid] == target){
            index = mid;
            break;
        }
        else if(arr[mid] < target){
            low = mid+1;
        }
        else {
            high = mid -1;
        }
    }
    if (index != -1){
        cout << "Element found at index "<< index;
    }
    else {
        cout << "Element not found!";
    }
    return 0;
}