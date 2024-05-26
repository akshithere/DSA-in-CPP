#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        vector<int>vec;
        

        while(x>0){
            int mod = x % 10;
            vec.push_back(mod);
            x = x/10;
        }
        if(x<0){
            return false;
        }
        vector<int>temp = vec;
       
        reverse(vec.begin(),vec.end());

         for(int i = 0; i < vec.size();i++){
             if(temp[i] == vec[i]){

             }else{
                return false;
             }
        }
        return true;
        
        
    }
};

int main(){
Solution sol;
bool ans = sol.isPalindrome(121);
bool ans2 = sol.isPalindrome(123);
bool ans3 = sol.isPalindrome(1221);
cout << "Is Palindrome? " << endl << ans;
cout << "Is Palindrome? " << endl << ans2;
cout << "Is Palindrome? " << endl << ans3;
}