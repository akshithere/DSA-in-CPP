#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
vector<char>vec = {'a','x','d','c','g','r'};
sort(vec.begin(),vec.end(),greater<char>());
// i had to use greter<char>() instead of greater<char> because the former is a function object
// which compares two characters and ultimately sorts the characters in descending order
// where as the latter is just a type and type was not supported
cout << "Printing char vector after sorting: " << endl;
for(vector<char>::iterator it = vec.begin(); it != vec.end(); it++){
    cout << (*it) << endl;
}
    return 0;
}