#include <iostream>
#include <queue>
using namespace std;
int main(){
    
    /* FIFO- First IN First OUT -> FRONT END 
    a , b , c , d ,e <- REAR END */
    queue<char>q;
    q.emplace('a');
    q.pop();
    cout << "The size is of the queue currently is: " << q.size() << endl;
    q.emplace('a');
    q.emplace('b');
    q.emplace('c');
    q.emplace('d');
    q.emplace('e');
    cout << "The element at the front ( i expect a )" << q.front() << endl;
    cout << "The element at the back ( i expect e )" << q.back() << endl;

    cout << endl << "Iterating over the queue" << endl;
    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}