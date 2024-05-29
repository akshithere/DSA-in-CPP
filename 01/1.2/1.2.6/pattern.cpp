#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

int main(){
    for(int i = 5; i > 0; i--){
        for(int j = 0; j < i; j++){
            cout << j+1;
        }
        cout << "\n";
    }
    return 0;
}