#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

// Hashing is a concept where when we are asked to tell the frequency of elements in an array a lot 
// of times then we can create a seperate hash array at max orignal array mein jitni values aa skti
// hai uss ka + 1 ek hash array bnayega aur pre compute kar lega ek iteration mein, then we can fetch
// how many times we want to fetch

int main(){
    int n;
    cout << "Enter the size of your array: " << "\n";
    cin >> n;
    int arr[n];
    cout << "Enter the values of your array: \n";
     for(int i = 0; i < n; i++){
        cin >> arr[i];
     }
    //  pre computation of the hash array
    int hash[13] = {0};
    for(int i = 0; i < n; i++){
        hash[arr[i]] += 1;
    }
    
    int q;
    cout << "How many times you want to fetch frequencies? \n";
    cin >> q;

    while(q--){
        int number;
        cout << "Enter the number: \n";
        cin >> number;
        cout << "\nThe frequency of " << number << " is: " << hash[number] << "\n";
    }

    return 0;
}