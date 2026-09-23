//Given an array, find the first element that occurs more than once and print its frequency.
#include <iostream>
using namespace std;
int main(){
    int n;
    int arr[100];
    cout << "Enter n:";
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    bool visited[100] = {false};
    for(int i=0;i<n;i++){
        if (visited[i] == true) continue;
        int count =1;
        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                count ++;
                visited[j] = true;
            }
        }
        if(count >1){
        cout << arr[i] << " occurs " <<count<< " times. ";
        break;
        }
    }
    
}