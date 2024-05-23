#include <iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cout << "Enter the number you wish to find sum till";
    cin >> n;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    cout << "The sum from 1 till n is " << sum << endl;
     
    return 0;
}