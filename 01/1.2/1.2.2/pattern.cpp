#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

int main(){
    // i -> 1,2,3,4,5
    for(int i = 0; i < 5; i++){
        for(int j = 0; j <= i; j++){
            cout << "*" ;
        
        }
        cout << "\n";
    }
    return 0;
}
// i = 0 , j = 0
//  i = 1, j = 0,1
//  i = 2, j = 0,1,2
//  i = 3, j = 0,1,2,3
//  i = 4, j = 0,1,2,3,4