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
    for(int i=0 ;i <n-1; i++ ){
        int minIndex =i ;
        for(int j = i+1; j<n;j++ ){
            if (arr[j] < arr[minIndex]) {
                minIndex =j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    //Sorted Array: 
    cout << "The sorted array is : ";
    for(int i=0;i<n;i++){
        cout <<arr[i] << " ";
    }
}