#include <iostream>
using namespace std;
#include <map>


int main(){
    //int int, pair,int, int,pair, pair,pair
map<int,int>mp1 = {{1,2},{3,4}};
map<pair<int,int>,pair<float,float>>mp2 = {{{1,1},{2.2,2.2}},{{40,40},{12.12,13.13}}};
for(const pair<int,int> &i : mp1){
    // const qualifier makes sure that the datatype is not modified and using
    // & to pass by reference makes sure that it is not copied but passed as reference
    // as copying can be very inefficient for larger values
    cout << i.first << ", " << i.second << endl;
}
cout << endl << endl; 
for(const pair<pair<int,int>,pair<float,float>> &i : mp2){
    cout << "Key: " << endl;
    cout << i.first.first << ", " << i.first.second << endl;
    cout << "Value: " << endl;
    cout << i.second.first << ", " << i.second.second << endl;    
}

// cout << mp2[{1,1}].first << " " << mp2[{1,1}].second << endl;
map<pair<int,int>,pair<float,float>>::iterator it = mp2.find({40,40});
cout << (*it).first.first << ", " << (*it).first.second << endl;
cout << endl;
cout << (*it).second.first << ", " << (*it).second.second << endl;
    return 0;
}