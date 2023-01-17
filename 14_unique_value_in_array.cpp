#include<iostream>
using namespace std;

int main(){
    int arr[6]={2,3,3,2,4,2}; 

    //filtering unique value
    for(int i=0; i<6; i++){
        for(int j=i+1; j<6;j++){
            if(arr[i] == arr[j]){
                arr[i] = arr[j] = -1;
            }
        }
    }

    //finding unique value
    for(int i=0; i<6; i++){
        if(arr[i] > 0){
            cout << arr[i];
            break;
        }
    }
}