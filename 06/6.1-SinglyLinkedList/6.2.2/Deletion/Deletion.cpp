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

void traverse(Node*head){
Node* temp = head;
while(temp){
    cout << temp->data << "->";
    temp = temp->next;
}
cout << "nullptr\n";

}

int main(){
vector<int> arr = {1,2,3,4};

Node* head = convertArrToLL(arr);

cout << "Before Deleting head\n";
traverse(head);
cout << "After Deleting head\n";
head = deleteHead(head);
traverse(head);    
cout << "After Deleting tail\n";
deleteTail(head);
traverse(head);    
 return 0;
 }