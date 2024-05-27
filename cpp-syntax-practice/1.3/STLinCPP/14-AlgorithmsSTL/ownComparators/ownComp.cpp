#include <iostream>
#include <algorithm>
using namespace std;
bool comp(pair<int,int>p1,pair<int,int>p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    // if(p1.first > p2.first) return true;
    if(p1.first < p2.first) return false;
    return true;
}
int main(){
    pair<int,int>arr[] = {{1,2},{2,1},{4,1}};
    //sort ascending order if the second element are different
    // if the second element are same then sort in the descending order of the first element
    sort(arr,arr+3,comp);
    cout << "After sorting to own logic" << endl;
    for(pair<int,int> i:arr){
        cout << "Key: " << i.first << ", Value: " << i.second << endl;
    }
    return 0;
}