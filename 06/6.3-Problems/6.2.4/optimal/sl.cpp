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
    bool hasCycle(ListNode *head) {
        ListNode* temp = head;
        map<ListNode*,int> mp;
        while(temp){
            if(mp[temp] == 1){
                return true;
            }else{
                mp[temp]++;
            }
            temp = temp->next;
        }
        return false;
    }
};

int main(){
    
    return 0;
}