#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

int main(){
    // gcd(a,b) where a > b, => gcd()
    // Eucledia Algo is much smart
    //  But the thing is that this algo is slighlty more optimised then the general mathematics algo
    //  Which states that to find the gcd of two numbers
    // gcd (4,2), take the bigger number and subtract the smaller number from it till one of the 
    // number becomes zero and the other number is your gcd
    // gcd((4-2),2) = gcd (2,2) = gcd((2-2),2) = gcd(0,2) => gcd = 2
    // But instead of manually subtracting each we noticed that what we are eventually ending up
    // doing everytim is just sime gcd(a,b) = gcd((a%b),b) if a > b till one of the number becomes zero

    int a,b;
    cout << "Enter a and b: " << "\n";
    cin >> a >> b;

    while(a != 0 || b != 0){
        if(a > b) a = a % b;
        else b = b % a;
        
        if(a == 0) cout << "gcd is " << b << "\n";
        if(b == 0) cout << "gcd is " << a << "\n";
    }
 return 0;
}