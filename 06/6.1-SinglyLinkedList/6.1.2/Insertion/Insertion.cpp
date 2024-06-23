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
    Node(int x){
        data = x;
        next = nullptr;
    }
};

void traverse(Node* head){
    Node* temp = head;
    while(temp){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "nullptr\n";
}

Node* arrayToLL(vector<int>arr){
Node*head = new Node(arr[0]);
Node* temp = head;
for(int i = 1; i < arr.size(); i++){
Node* newNode = new Node(arr[i]);
temp->next = newNode;
temp = newNode;
}
return head;
}

Node* InsertAtHead(Node* head, int value){
Node* newNode = new Node(value);
newNode->next = head;
head = newNode;
return head;
}

Node* InsertAtTail(Node* head, int value){
    if(head == NULL) return new Node(value);
    
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    Node* newNode = new Node(value);
    temp->next = newNode;
    return head;
}

Node* InsertAnywhere(Node* head, int pos, int val){
    if(head == NULL) return NULL;
    Node* temp = head;
    int cnt = 1;
    while(cnt != pos-1){
        cnt++;
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}
int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8};
    Node* head = arrayToLL(arr);
    cout << "Traversing the linked list\n";
    traverse(head);
    head = InsertAnywhere(head,5,25);
    cout << "\nTraversing the linked list\n";
    traverse(head);
 return 0;
}