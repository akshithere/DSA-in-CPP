#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

void swapByRef(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}
int main(){
    int a;
    int b;
    cout << "Enter the numbers you wish to swap: " << "\n";
    cin >> a >> b;
    swapByRef(a,b);
    cout << "After swapping by reference, the numbers are." << "\n";
    cout << "a is: " << a << ", b is: " << b << "\n";
    return 0;
}