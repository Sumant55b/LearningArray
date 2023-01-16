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

    //Checking
    int diff = 0;
    for(int i=0; i<v.size(); i++){
        if(i%2 == 0){
            diff += v[i]; 
        }else{
            diff -+ v[i];
        }
    }
    cout << "Total difference is: " << diff;
}