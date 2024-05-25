#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <cstring>
class Solution{
public:
    int romanToInt(string s){
        unordered_map<char,int> um;
        um['I'] = 1;
        um['V'] = 5;
        um['X'] = 10;
        um['L'] = 50;
        um['C'] = 100;
        um['D'] = 500;
        um['M'] = 1000;
        int sum = 0;
        int i = 0;
        while(s[i]!='\0'){
            if(um[s[i]] < um[s[i+1]]){
                sum -= um[s[i]];
            }else{
                sum+= um[s[i]];
            }
            i++;
        }
        return sum;
    }
};
int main(){
    Solution sol;
    int sum = sol.romanToInt("MMMXXXIV");
    cout << "The sum is: " << sum << endl;
}