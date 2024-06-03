#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;
// i used an unordered map here where each key is an character which guides the hash array that
//  for this particular character you have to insert in this index.
//  i used a for loop and here for every lowercase alphabet i assigned numbers from 0 to 25
// and in the pre storing of the hash array what is did was i said
//  run the loop till the end of the string and hash[u[s[i]]]
//  s[i] will return char -> this char will we given to u[] -> this map will in turn return the index
//  where the characters frequency will be increased.

// In conclusion here um is used for nothing but to just to map strings character to hash array's index

// READ THIS-> AB MAINE UNORDERED MAP BANA HI DIYA THA TOH SAALE TU GUIDE KYU KAR RAHA HAI HASH ARRAY
// KO APNE UM SE, SEEDHA CHARACTER SE USKI FREQUENCY MAP KARNA
int main(){
string s;
cout << "Enter you line: ";
getline(cin,s);
unordered_map<char,int>u;
for(int i = 0; i < 26; i++){
    u['a'+i] = i;
}
int size = s.size();
int hash[26] = {0};
// pre compute
for(int i = 0; i < size; i++){
    hash[u[s[i]]] += 1;
}

 
int q;
cout << "Enter how many times you want to know the frequencies of the characters?: \n";
cin >> q;
while(q--){
    char i;
    cout << "Enter the character you want to know of: " << "\n";
    cin >> i;
    cout << "The character " << i << " occured " << hash[u[i]] << " times :) \n";
}

return 0;
}