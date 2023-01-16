#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[] = {1,2,5,3,4,};
    int max = INT_MIN;           //coming from limits.h header file, it has minimum value of int.
    int min = INT_MAX;          // it contains max value of int. 
    //finding max value
    for(int data : arr){
        if(max < data)
            max = data;
    }

    // finding min value
    for(int data : arr){
        if(min > data)
            min = data;
    }
    cout << "Max value of array: " << max << "\n";
    cout << "Min value of array: " << min << "\n";
}