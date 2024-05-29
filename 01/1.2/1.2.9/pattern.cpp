#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

int main(){
    for(int i = 0; i < 5; i++){
        for(int j = 4; j > i; j--){
            cout << " ";
        }
        for(int k = 0; k < (2*i)+1; k++){
            cout << "*";
        }
        cout << "\n";
    }

    // Kya striver bhai bhi inverted pyramid ke outer loop ko andar vale se adjust kar rahe hai

    for(int i = 5; i > 0; i--){
        for(int j = 5; j > i; j--){
            cout << " ";
        }
        for(int k = 0; k < (2*i)-1; k++){
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}