#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

int main(){
    for(int i = 0; i < 5; i++){
        for(char ch = 'A'; ch <= 'A'+ i; ch++){
            cout << ch << " ";
        }
        cout << "\n";
    }
    return 0;
}