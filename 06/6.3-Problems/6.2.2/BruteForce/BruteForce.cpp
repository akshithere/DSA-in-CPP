#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;



struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        stack<int>s;
        ListNode* temp = head;
        while(temp){
            s.push(temp->val);
            temp = temp->next;
        }
        temp = head;
        while(temp){
            temp->val = s.top();
            s.pop();
            temp = temp->next;
        }
        return head;
    }
};

int main(){
    
    return 0;
}