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

Node* findMiddle(Node* head){
int n = 0;
Node* temp = head;
while(temp){
    n++;
    temp = temp->next;
}
int middle = (n/2)+1;
temp = head;
while(temp){
    middle--;
    if(middle == 0) break;
    temp = temp->next;
    
}
return temp;
}

int main(){
    vector<int>arr = {1,2,3,4};
   Node* head = arrayToLL(arr);
    // cout << "\nFor traversing the linked list\n";
    Node* middleNode = findMiddle(head);
    cout << "middle node is: " << middleNode->data;
    return 0;
}