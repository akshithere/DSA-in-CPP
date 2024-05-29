#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

int main(){
    // Permutations are all the possible combinations
    string s = "1234";
    do{
        cout << s << endl;
    }while(next_permutation(s.begin(),s.end())); 
    // What does next permutation do?
    // agli permutation dedeta hai
    // aur jab mai isse do while loop mein chala deta hu
    // toh jab tak sab possible combinations khatam nhi ho jati tab tak null nhi aata aur loop nhi chta
    return 0;
}