#include<iostream>
#include<vector>
using namespace std;
 

int main(){
    vector <int> v(5);
    //taking input
    cout << "Enter the value: \n";
    for(int i=0; i<5; i++){
        cin >> v[i];
    }

    //taking value to check 
    cout << "Enter the key: \n ";
    int key;
    cin >> key;

    //counting data
    int count = 0;
    for(int i=0; i<v.size(); i++){
        if(key < v[i]){
            count++; 
        }
    }
    cout << "Total greater value :" << count;
}