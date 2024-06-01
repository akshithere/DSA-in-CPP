#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

void printCount(int &count){
    count++;
    if(count == 70) return;
    cout << count << "\n" ;
    printCount(count);
}
// Stack space = call stack
// basic jab jab function call pending rehte hai vo ussi sequence mein stack mein push kardiye jaate hai
// jab tak sabse upar vala function execute ni hojata tab tak vo pending rehte hai
// since stack hai toh LIFO rehta hai such that the one to go in last gets finished first
int main(){
    int count = 0;
    printCount(count);
 return 0;
}