#include<iostream>
using namespace std;

//searching element using linear search
int linearSearch(int arr[], int size, int key){
    int ans = -1;
    for(int i=0; i<size; i++){
        if(key == arr[i]){
            return i;
        }
    }
    return ans;
}
int main(){
    int data[] = {4,2,32,5,23,24,34};
    cout << "Enter the key what you want to seach: ";
    int key;
    cin >> key;

    cout << linearSearch(data,7,key); 

}