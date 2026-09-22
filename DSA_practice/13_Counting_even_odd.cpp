//Counting Odd and Even number of elementss in the array: 
#include <iostream>
using namespace std;
int main(){
    int n;
    int arr[100];
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int odd_count =0;
    int even_count =0;
    for(int i=0;i<n;i++){
        if(arr[i] % 2 ==0){
            even_count ++;
        }
        else 
            odd_count++;
    }
    int pos_count =0;
    int neg_count =0;
    for(int i=0;i<n;i++){
        if(arr[i] >=0){    //ok if non negative integers are to be found
                           //for even odd use >0 not >=0 becuase 0 is non of them 
            pos_count++;
        }
        else 
            neg_count++;
    }
    cout << "NO. of Odd numbers in the array are: " << odd_count << endl;
    cout << "NO. of even numbers in the array are: " << even_count << endl;
    cout << "NO. of Positive numbers in the array are: " << pos_count << endl;
    cout << "NO. of Negative numbers in the array are: " << neg_count << endl;
return 0;
}