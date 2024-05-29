#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

void doSomething(int num){
    cout << "The number is: " << num << "\n";
    num *=2;
    cout << "The number is: " << num << "\n";
    num *=2;
    cout << "The number is: " << num << "\n";

}

// Here a copy of the orignal number was sent not the actual number was sent

int main(){
    int num;
    cout << "Enter the number you wish to print: " << "\n";
    cin >> num;
    cout << "The function was called and sent a copy of num: " << "\n";
    doSomething(num);
    cout << "The number after passing it by value is: " << num << "\n";

    return 0;
}