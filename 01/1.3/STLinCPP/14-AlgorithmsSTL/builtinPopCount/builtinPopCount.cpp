#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

int main(){
    //Built In Pop Count
    int el = 7; // bits -> 111
    int el2 = 6; // bits -> 111
    long long el3 = 1234567890;
    int res = __builtin_popcount(el);
    int res2 = __builtin_popcount(el2);
    int res3 = __builtin_popcountll(el3);
    cout << "result is: " << res << endl;
    cout << "result 2 is: " << res2 << endl;
    cout << "result 3 is: " << res3 << endl;
    return 0;
}