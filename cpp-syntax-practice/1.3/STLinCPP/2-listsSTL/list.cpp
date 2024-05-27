#include <iostream>
#include <list>
using namespace std;
int main(){
    list<int>li;
    li.push_back(1);
    li.emplace_back(2);
    li.push_front(3);
    li.emplace_front(4);
    list<int>::iterator it = li.begin();
    for(auto i : li){
        cout << i << endl;
    }

    return 0;
}