#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;
class Node{
public:
    int data;
    Node* next;
public:
    Node(){
        data = 0;
        next = nullptr;
    }
    Node(int x){
        data = x;
        next = nullptr;
    }
    Node(int x,Node* ptr){
        data = x;
        next = ptr;
    }

};

void display(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << "->";
        temp = temp->next;
    }
}

Node* arrayToLL(vector<int> &arr){
Node* head = new Node(arr[0],nullptr);
Node* mover = head;
for(int i = 1; i < arr.size(); i++){
    int value = arr[i];
    Node* newNode = new Node(arr[i]);
    mover->next = newNode;
    mover = newNode;
}
return head;

}

Node* reverseLL(Node*head,Node*temp){
    Node* newHead;
    if(temp->next == nullptr){
        newHead = temp;
         return temp;
    };
    Node* front = reverseLL(head,temp->next);
    front->next = temp;
    temp->next = nullptr;
    return newHead;

}
int main(){
    vector<int>arr = {1,2,3,4};
   Node* head = arrayToLL(arr);
    // cout << "\nFor traversing the linked list\n";
    head = reverseLL(head,head);
    display(head);
    return 0;
}