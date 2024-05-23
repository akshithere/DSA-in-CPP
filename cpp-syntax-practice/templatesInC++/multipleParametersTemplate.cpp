#include <iostream>
using namespace std;
template <class T1, class T2>
class myClass{
public:
    T1 data1;
    T2 data2;
     myClass(T1 p1,T2 p2){
        data1 = p1;
        data2 = p2;
     }
    void display(){
        cout << this->data1 << endl;
        cout << this->data2 << endl;
    }

};
int main(){
    myClass <int,char> obj1(69,'A');
    obj1.display();
    return 0;
}