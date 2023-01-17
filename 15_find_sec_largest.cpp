#include<iostream>
#include<limits.h>
using namespace std;

//finding index of largest value of array
int getIndexOfLargeValue(int arr[], int size){
    int max = INT_MIN;
    int lastIndex = -1;
    for(int i=0; i<size; i++){
        if(max < arr[i]){
            max = arr[i];
            lastIndex = i;
        }
    }
    return lastIndex;
}
int main(){
    int arr[7] = {1,2,3,4,5,6,7};

    int li =  getIndexOfLargeValue(arr,7);
    arr[li] = -1;
    li =  getIndexOfLargeValue(arr,7);
    cout << arr[li];

}