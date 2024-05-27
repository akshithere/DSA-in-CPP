// give something like {1,1}
#include <iostream>
using namespace std;
int main(){
    pair<long,double>myPair;
    pair<int,pair<long,double>>nestedPair;
    myPair = {1234567890,69.343e4};
    nestedPair = {69,myPair};

    cout << "Key of my pair is: " << myPair.first << endl << "Value of my pair is: " << myPair.second << endl;
     cout << "The first value is: " << nestedPair.first << endl << "The second value is: "
      << nestedPair.second.first << endl << "The third value is: " << nestedPair.second.second<< endl;
// pair can be used as a datatype for an array like int,float etc
    pair<int,int> pairArr[5] = { {1,2},{3,4},{5,6},{7,8},{9,10}};
    int size = sizeof(pairArr)/sizeof(pairArr[0]);
    for(int i = 0; i < size; i++){
        cout << "First: " << pairArr[i].first << endl;
        cout << "Second: " << pairArr[i].second << endl;
        
    }
    return 0;
}