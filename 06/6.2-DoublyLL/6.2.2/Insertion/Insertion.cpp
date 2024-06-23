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

Node* InsertBeforeHead(Node* head, int val){
    Node* newNode = new Node(val,head,nullptr);
    if(head == NULL) return newNode;
    head->back = newNode;
    head = newNode;
    return head;
}

Node* InsertBeforeTail(Node* head, int val){
    if(head == nullptr){
        Node* newNode = new Node(val);
        return newNode;
    } else if(head->next == nullptr){
        head = InsertBeforeHead(head, val);
        return head;
    }
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* newNode = new Node(val,temp,prev);
    prev->next = newNode;
    temp->back = newNode;
    return head;
}
Node* InsertBeforeKthElement(Node* head, int k, int val){
    int cnt = 0;
    Node* temp = head;
    while(temp){
        cnt++;
        if(cnt == k) break;
        else temp = temp->next;
    }
    if(temp->back == nullptr){
        head = InsertBeforeHead(head,val);
        return head;
    }else if(temp->next == nullptr){
        head = InsertBeforeTail(head,val);
        return head;
    }
    Node* prev = temp->back;
    Node* newNode = new Node(val,temp,prev);
    prev->next = newNode;
    temp->back = newNode;
    return head;

}
void InsertBeforeAGivenNode(Node* temp, int val){
    Node* prev = temp->back;
    Node* newNode = new Node(val, temp, prev);
    temp->back = newNode;
    prev->next = newNode;
}
int main(){
    vector<int>arr = {1,2,3,4};
Node* head = arrToDLL(arr);
// head = InsertBeforeKthElement(head,3,24);
InsertBeforeAGivenNode(head->next->next->next, 69);
traversal(head);


    return 0;
}
