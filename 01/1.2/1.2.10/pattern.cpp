#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

int main(){
    // 9 rows
    // 5 columns
    // 1,4
    // 2,3
    // 3,2
    // 4,1
    // 5,0
    // 4,1
    // 3,2
    // 2,3
    // 1,4
    // pehli 5 row ke liye toh normal hona chahie condition nested loop
    int n = 5;
    int stars = n;
    int i;
    int totalRows = (2*n); // 9
    
    for( i = 1; i < totalRows ; i++){
        if(i>5){stars = (2*n)-i;} // i - 5
        if(i<=5){stars = i;} 
        for(int j = 1; j <= stars; j++){
            cout << "*";
        }
        cout << "\n";
        
    }
    
    
    cout << "\n";
    return 0;
    }
    
