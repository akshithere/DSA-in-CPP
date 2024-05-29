#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

int main(){
    
    for(int i = 0; i < 4; i++){ // 0,1,2,3   ->  6,4,2,0
        for(int j = 0; j <= i; j++){
            cout << j+1;
        }

        for(int k =2*i ; k < 6; k++){
            cout << " ";
        }
      
        for(int j=i; j>=0;j--){
            cout << j+1;
        }
        cout << "\n";
    }
    return 0;
}