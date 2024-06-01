#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;
bool checkPalindrome2(string s,int size,int l){
if(l>=size/2) return true;
if(s[l] != s[size-l-1]) return false;
return checkPalindrome2(s,size,l+1);
}
int main(){
string s;
cout << "Enter the string you wish to check if palindrome or not? " << "\n";
getline(cin,s);

if(checkPalindrome2(s,s.length(),0)) cout << "The given string is palindrome :]\n";
else cout << "The given string is not palindrome \n";

 return 0;
}