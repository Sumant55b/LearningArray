#include<iostream>
using namespace std;

int main(){
    int arr[] = {3,2,1,0,4,6};

    cout << "Enter the key: \n";
    int key;
    cin >> key;

    int countPair = 0;
    //checking 
    for(int i=0; i<6; i++){
        for(int j=i+1; j<6; j++){
            for(int k=j+1; k<6;k++){
                if(((arr[i] + arr[j]) + arr[k]) == key){
                countPair++;
            }
            }
        }
    }
    cout << "No of pair is : " << countPair;
}