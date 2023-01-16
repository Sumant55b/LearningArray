#include<iostream>
using namespace std;

int main(){
    int arr[] = {3,5,23,324,5,1};
    //find size of array: (totalElement * size of type) = 6*4 = 24;
    cout << "Size of array :" << sizeof(arr) << endl;
    //find lengthof array: (sizeOf array/size of data type) = 24/4 = 6;  
    cout << "length of array :" << sizeof(arr)/sizeof(int) << endl;
}