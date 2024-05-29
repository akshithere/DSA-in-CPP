#include <iostream>
#include <set>
using namespace std;
int main(){
    multiset<float>ms = {1.1,2.2,2.2,2.2,3.3,4.4,5.5};
    multiset<float>::iterator it = ms.find(2.2);
    for(float i: ms){
        cout << i << endl;
    }
    ms.erase(it,next(it,2));
    cout << "Erased 2 twice: " << endl;
    for(float i: ms){
        cout << i << endl;
    }
    return 0;
}