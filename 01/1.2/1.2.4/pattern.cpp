#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

int main(){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j <= i; j++){
            cout << i+1;
        }
        cout << "\n";
    }
    return 0;
}