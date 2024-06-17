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
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
public: 
    Node(int data2){
        data = data2;
        next = nullptr;
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

int main(){
    vector<int>arr = {1,2,3,4};
   Node* head = arrayToLL(arr);
    cout << "\nFor traversing the linked list\n";
    display(head);
    return 0;
}