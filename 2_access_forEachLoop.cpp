#include<iostream>
using namespace std;

int main(){
    int arr[5];
    cout << "Enter element of an array: \n";



    //taking input
    // we can't use like this syntax because her it will store at variable element. 
    //for(int element: arr) cin >> element;
    
    //we will pass reference of array
    for(int &element: arr) cin >> element;


   // Accessing element
    for(int element:arr) cout << element << " "; 

    return 0;
}