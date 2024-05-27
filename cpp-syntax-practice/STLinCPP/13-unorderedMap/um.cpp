#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    unordered_map<int,float>mmp = {{1,3.3},{2,2.2},{2,2.2}};
    cout << "The unordered map is: " << endl;
    for(pair<int,float>i : mmp){
        cout << i.first << ", " << i.second << endl;
    }
    //1. Unique ->  UNIQUE  2.Sorted -> NOT SORTED
    return 0;
}