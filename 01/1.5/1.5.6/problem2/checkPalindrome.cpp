#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

bool checkPalindrome(string s,int size, int l, string temp){

if(l >= size/2) if(s == temp){  return true;}else{
    cout << s << "\n" << temp << "\n";
    return false;
    }
swap(temp[0],temp[size-1-l]);
return checkPalindrome(s,size,l+1,temp);
}
int main(){
string s;
cout << "Enter the string you wish to check if palindrome or not? " << "\n";
getline(cin,s);

if(checkPalindrome(s,s.length(),0,s)) cout << "The given string is palindrome :]\n";
else cout << "The given string is not palindrome \n";

 return 0;
}