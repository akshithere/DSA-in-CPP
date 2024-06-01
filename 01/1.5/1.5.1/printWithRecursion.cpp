#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void printName(string name, int i, int &times){
    if(i > times) return;
    
    cout << name << "\n";

    printName(name,i+1,times);

}
int main(){
 string name;
 int count = 0;

 cout << "Enter your name: \n";
 getline(cin,name);

 cout << "How many times you wanna print it? " << "\n";
 int times;
 cin >> times;
printName(name, 1, times);
return 0;
}