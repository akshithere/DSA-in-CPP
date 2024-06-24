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
    vector<int> merge(vector<int> &arr,int low, int mid, int high){
        int right = mid+1;
        int left = low;
        vector<int>temp;
        
        while(left <= mid && right <= high){
            if(arr[left] < arr[right]){
                temp.emplace_back(arr[left]);
                left++;
            }else{
                temp.emplace_back(arr[right]);
                right++;
            }
        }
        while(left <= mid){
            temp.emplace_back(arr[left]);
            left++;
        }
        while(right <= high){
            temp.emplace_back(arr[right]);
            right++;
        }
        for(int i = low; i <= high; i++){
            arr[i] = temp[i-low];
        }
        return arr;
        
    }
    vector<int> mergeSort(vector<int> &arr, int low, int high){
        if(low >= high) return arr;
        int mid = (high+low)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        arr = merge(arr,low,mid,high);
        return arr;
    }
    ListNode* sortList(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* temp = head;
        vector<int> arr;
        while(temp){
            arr.emplace_back(temp->val);
            temp = temp->next;
        }
        int n = arr.size();
       arr =  mergeSort(arr,0,n-1);
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
    
    return 0;
}