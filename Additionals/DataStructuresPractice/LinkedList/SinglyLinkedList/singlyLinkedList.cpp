#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};
class LinkedList{
private:
    Node* head;
public:
    LinkedList(){
        head = nullptr;
        
    }
void insertAtBeginning(int data){
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}
void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }
    
};
int main(){
    LinkedList List;
    List.insertAtBeginning(69);
    List.insertAtBeginning(100);
    List.display();
return 0;
}

//head ki baat kaise kare there always must be a head pointer pointing to the first node of the linked list