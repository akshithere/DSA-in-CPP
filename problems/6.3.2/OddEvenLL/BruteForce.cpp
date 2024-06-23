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
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* temp = head;
        vector<int> arr;
        while(temp != nullptr && temp->next != nullptr){
            arr.emplace_back(temp->val);
            temp = temp->next->next;
        }
        if(temp) arr.emplace_back(temp->val);
        temp = head->next;
        while(temp != nullptr && temp->next != nullptr){
            arr.emplace_back(temp->val);
            temp = temp->next->next;
        }
        if(temp) arr.emplace_back(temp->val);
        temp = head;
        int i = 0;
        while(temp){
            temp->val = arr[i];
            i++;
            temp = temp->next;
        }
        return head;
    }
};

int main(){
    Solution obj;
    ListNode* head = nullptr;
    head = obj.oddEvenList(head);
    
    return 0;
}