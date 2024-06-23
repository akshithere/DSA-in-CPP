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
    Node* back;
public: 
    Node(int x){
        data = x;
        next = nullptr;
        back = nullptr;
    }
public:
    Node(int x, Node* next1, Node* back1){
        data = x;
        next = next1;
        back = back1;

    }
};

Node* reverseDLL(Node* head){
    Node* temp = head;
    if(head == nullptr) return NULL;
    else if(head->next == nullptr) return head;
Node* last = temp->back;
while(temp){
    last = temp->back;
    temp->back = temp->next;
    temp->next = last;
    temp = temp->back;
}
return last->back;
}


void traversal(Node* head){
Node* temp = head;
while(temp){
    cout << temp->data << "->";
    temp = temp->next;
}
cout << "nullptr\n";
}
Node* arrToDLL(vector<int>arr){
Node* head = new Node(arr[0]);
Node* prev = head;
for(int i = 1; i < arr.size(); i++){
    Node* newNode = new Node(arr[i], nullptr, prev);
    prev->next = newNode;
    // newNode->back = prev;
    prev = newNode;
}
return head;
}

int main(){
    vector<int>arr = {1,2,3,4};
Node* head = arrToDLL(arr);
head = reverseDLL(head);

traversal(head);


    return 0;
}