#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

int main(){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}

// Guessing the time and space complexity of this pattern
// TC -> O(N^2) = O(5^2) = O(25)
// SC -> O(2)