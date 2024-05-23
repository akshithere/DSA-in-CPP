#include <iostream>
#include <cstring>
using namespace std;
int main(){
    // int* ptr = new int;
    // *ptr = 69;
    // cout << "The value of at address " << ptr << " is: " << *ptr << endl;
    // How about a char array?
    char * ptr = new char[100];
    strcpy(ptr,"AkshitChad");
    cout << "The value of at address " << ptr << " is: " << *ptr << endl;
    return 0;
}