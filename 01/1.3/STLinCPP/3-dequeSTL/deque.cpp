#include <iostream>
#include <deque>
using namespace std;
int main(){
   deque<char>dq;
   dq.push_back('a');
   dq.emplace_back('b');
   dq.at(2);
   for(auto i:dq){
    cout << i << endl;

   }
   dq.clear();
      cout << "Initial deque was cleared" << endl;

   dq.push_back('c');
   dq.emplace_back('d');
   dq.emplace_back('e');
    dq.erase(dq.begin()+1);
    cout << "Middle element was erased" << endl;
    for(auto i:dq){
    cout << i << endl;

   }
    return 0;
}