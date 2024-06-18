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
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* convertArrToLL(vector<int>arr){
Node* head = new Node(arr[0]);
Node* mover = head;
for(int i = 1; i < arr.size(); i++){
    Node* newNode = new Node(arr[i]);
    mover->next = newNode;
    mover = mover->next;
}
return head;
}

Node* deleteHead(Node* head){
if(head == nullptr) return head;
Node* temp = head;
head = head->next;
// free(temp);
delete temp;
return head;
}

Node* deleteTail(Node*head){
    if(head == nullptr || head->next == nullptr) return NULL;
    Node* temp = head;
    while(temp->next->next != nullptr){
        temp = temp->next;
    }
    free(temp->next);
    temp->next = nullptr;
    return head;
}

Node* deleteNode(Node* head, int k){
Node* temp = head;
Node* prev = NULL;
if(head == NULL || head->next == NULL) return NULL;
if(k == 1){
head = head->next;
free(temp);
return head;
}
int cnt = 0;
while(temp!=nullptr){
     cnt++;
     if(k == cnt){
        prev->next = temp->next;
        free(temp);
        break;
     }
     prev = temp;
     temp = temp->next;
}
return head;
}

Node* DeleteNodeVal(Node* head, int el){
 if(head== NULL) return NULL;
Node* temp = head;
Node* prev = NULL;
if(head->data == el){
    head = head->next;
    free(temp);
}
while(temp){
    if(temp->data == el){
        prev->next = temp->next;
        free(temp);
        free(prev);
    }
    prev = temp;
    temp = temp->next;
}
return head;
}

void traverse(Node*head){
Node* temp = head;
while(temp){
    cout << temp->data << "->";
    temp = temp->next;
}
cout << "nullptr\n";

}

int main(){
vector<int> arr = {1,2,3,4,5,6,7,8};

Node* head = convertArrToLL(arr);

cout << "Before Deleting head\n";
traverse(head);
cout << "After Deleting head\n";
head = deleteHead(head);
traverse(head);    
cout << "After Deleting tail\n";
head = deleteTail(head);
traverse(head); 
cout << "After Deleting 1,2,3,4 value element\n";
head = DeleteNodeVal(head, 1);
head = DeleteNodeVal(head, 2);
head = DeleteNodeVal(head, 3);
head = DeleteNodeVal(head, 4);

traverse(head);      
 return 0;
 }