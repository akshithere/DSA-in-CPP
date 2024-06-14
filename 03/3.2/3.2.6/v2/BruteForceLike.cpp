#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

  vector<int> returnAlternative(vector<int> &a){
    int n = a.size();
    int x = 0;
    int y = 0;
    vector<int>pos;
    vector<int>neg;
    for(int i = 0; i < n; i++){
        if(a[i] < 0){
            neg.emplace_back(a[i]);
        }else{
            pos.emplace_back(a[i]);
        }
    }


 int index = 0;
    while(x < pos.size() && y < neg.size()){
    a[index++] = pos[x++];

    a[index++] = neg[y++];

    }

  if(x < pos.size()){
      while(x < pos.size()){
    a[index++] = pos[x++];
      }
  }else{
    
    while(y < neg.size()){
    a[index++] = neg[y++];
    }
  }
    return a;
  }

int main(){
 vector<int> a = {1,2,3,-1,-2,-3,4,5,12,14,-4,69};
 cout << "Before rearranging \n";
 for(auto i : a){
    cout << i << " ";
 }
 a = returnAlternative(a);
  cout << "\nAfter rearranging \n";
 for(auto i : a){
    cout << i << " ";
 }
 return 0;
}