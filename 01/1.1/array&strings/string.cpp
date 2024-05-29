#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;
// 
int main(){
    string s = "Hey HEY hey LOVER";
    int size = s.length();
    s[size-1] = 'r';
    cout << "The size/length of the string is: " << size << "\n";
    cout << "The last character of the string is the: " << s[size-1] << "\n";
    return 0;
}