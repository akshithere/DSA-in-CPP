#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    // 1.1.1 Basic I/O -> cout & cin
    // 1.1.2 DataTypes
    int a = 2147483647;
    //The size of int is arount -2 Billion to 2 Billion
    // -2147483648 to +2147483647, memoryStorage is 4 bytes
    cout << a << "\n";
    /* To store more integers
    long long int -> -(2^63) to (2^63)-1

unsigned long long int -> 0 to 18,446,744,073,709,551,615
    */

//    Note: single long has minimal and no affect no compilers where range of int = range of long
//  However for 16 bit compilers using long could be beneficial so single long isnt useless

// For decimal numbes -> 
// float, double, long double

   // For char
    char signedChar = 65; // 'A' in ASCII
    cout << "Signed Char: " << signedChar << endl;

    unsigned char unsignedChar = 97; // 'a' in ASCII
    cout << "Unsigned Char: " << unsignedChar << endl;
    

    // For String
    string s;
    string s2;
    // cin >> s;
    // cout << s;
    // When i do this only the part of the string preceeding the space is picked up
    // Not the whole line but just one word.
    // To Pick up the whole word we can use something called getline
    getline(cin,s2);
    cout << s2;
    return 0;
}