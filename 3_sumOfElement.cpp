#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int sum = 0;
    
    for(int element: arr) sum += element;    
    
    cout << "Sum of all element of array: " << sum ;
}