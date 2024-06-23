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

Node* DeleteHead(Node* head){
if(head == nullptr || head->next == nullptr) return NULL;
Node* temp = head;
head = head->next;
head->back = nullptr;
temp->next = nullptr;
free(temp);
return head;
}

Node* DeleteTail(Node* head){
    Node* tail = head;
    while(tail->next != nullptr){
        tail = tail->next;
    }
    Node* prev = tail->back;
    prev->next = nullptr;
    tail->back = nullptr;
    delete tail;
    return head;
}

Node* DeleteKthElement(Node* head, int k){
if(head == nullptr) return NULL;
Node* temp = head;
int cnt = 0;

while(temp){
cnt++;
if(cnt == k){
    break;
}
temp = temp->next;
}
if(temp->next == nullptr && temp->back == nullptr){
    delete temp;
    return NULL;
}else if(temp->back == nullptr){
    head = DeleteHead(head);
    return head;
}else if(temp->next == nullptr){
    head = DeleteTail(head);
    return head;
}

Node* prev = temp->back;
Node* front = temp->next;
prev->next = front;
front->back = prev;
temp->next = nullptr;
temp->back = nullptr;
free(temp);
return head;
}

void DeleteNode(Node* temp){
    // Head as node will never be given
Node* prev = temp->back;
Node* front = temp->next;
if(front == nullptr){
    prev->next = nullptr;
    temp->back = nullptr;
    free(temp);
    return;
}
prev->next = front;
front->back = prev;
temp->next = temp->back = nullptr;
delete temp;
}

int main(){
    vector<int>arr = {1,2,3,4};
Node* head = arrToDLL(arr);
traversal(head);
cout << "Deleting head->next->next->next Node\n";
DeleteNode(head->next->next->next);
traversal(head);

    return 0;
}