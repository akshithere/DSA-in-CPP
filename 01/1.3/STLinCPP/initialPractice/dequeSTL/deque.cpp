#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    for(int i:d){
        cout << i << endl;
    }

    cout << "Element at the first index\n" << d.at(0);
    cout << "Element at front: " << d.front();
    cout << "Element at the back is: " << d.back();
    cout << "Size before erasing front element: " << d.size();
    cout << "Erasing the element: ";
     d.erase(d.begin(),d.begin()+1);
     cout << "Size after erasing front element: " << d.size();

    return 0;
}