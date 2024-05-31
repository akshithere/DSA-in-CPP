#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

int main(){
    // I definitely know that the outer loop need to be runnning for 5 times
    int count = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j <= i; j++){
            count++;
            cout << count << " ";
        }
        cout << "\n";
    }
    return 0;
}