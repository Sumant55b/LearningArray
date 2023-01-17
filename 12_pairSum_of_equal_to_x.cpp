#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,5,4};

    cout << "Enter the key: \n";
    int key;
    cin >> key;

    int countPair = 0;
    //checking 
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            if(arr[i] + arr[j] == key){
                countPair++;
            }
        }
    }
    cout << "No of pair is : " << countPair;
}