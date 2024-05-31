#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;
bool isPrime(int &x){
    if(x<=1) return false;
    
    vector<int>divisors;
for(int i = 2; i * i <= x; i++){
if(x%i==0){
    divisors.emplace_back(i);
    if(x/i!=i){
        divisors.emplace_back(x/i);
    }
    return false;
}
}
// cout << "The divisors for " << x << "are: \n";
// for(auto i:divisors){
//     cout << i << " ";
// }
// cout << "\n";
return true;
}
int main(){
    int x;
    cout << "Enter the number you wish to find if prime or not: " << "\n";
    cin >> x;


   if(isPrime(x))  cout << "The number "<< x <<" is prime." << "\n";
   else cout << "The number "<< x <<" is not prime." << "\n";
   
    return 0;
}