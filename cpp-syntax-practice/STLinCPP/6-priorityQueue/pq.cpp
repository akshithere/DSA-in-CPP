#include <iostream>
#include <queue>
using namespace std;

int main(){
    // maxHeap -> bada element at the top
    priority_queue<float>pq;
    pq.push(10);
    pq.push(8);
    pq.emplace(6);
    pq.emplace(4);
    cout << "The element at the top is: " << pq.top() << endl;
    pq.pop();
        cout << "The element at the top is: " << pq.top() << endl;
    pq.pop();
        cout << "The element at the top is: " << pq.top() << endl;
    pq.pop();
    // minHeap -> Chotta element at the top
    // Syntax to declare minHeap is
    cout << endl << endl;
    cout << "Mininum Heap is as followed" << endl;
    priority_queue<int,vector<int>,greater<int>> pq2;
     pq2.push(10);
    pq2.push(8);
    pq2.emplace(6);
    pq2.emplace(4);
    cout << "The element at the top is: " << pq2.top() << endl;
    pq2.pop();
        cout << "The element at the top is: " << pq2.top() << endl;
    pq2.pop();
        cout << "The element at the top is: " << pq2.top() << endl;
    pq2.pop();
    return 0;
}