#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

int main(){
 string s;
 cout << "Enter the string \n";
 getline(cin, s);
 int hash[26] = {0};
//  pre compute
 
 for(int i = 0; i < s.size(); i++){
    hash[(s[i])-'a'] += 1;
 } 
 int q;
 cout << "Enter the number of queries you want to ask?: " << "\n";
 cin >> q;
 while(q--){
 char c;
 cout << "Enter the character that you want to search for: " << "\n";
 cin >> c;
 // fetching
 cout << "The frequency of character " << c << " is " << hash[c-'a'] << " times :) \n";
 }
 return 0;
}