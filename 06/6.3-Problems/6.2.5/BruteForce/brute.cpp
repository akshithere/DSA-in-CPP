#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;


  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* temp = head;
        map<ListNode*,int> mp;
        while(temp){
            if(mp.find(temp)!=mp.end()){
                return temp;
            }else{
                mp[temp]++;
            }
            temp = temp->next;
        }
        return nullptr;
    }
};

int main(){
    
    return 0;
}