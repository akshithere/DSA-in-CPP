#include <iostream>
using namespace std;
template<class T>
class Vector{
public:
    T * arr;
    int size;

    Vector(int m){
        size = m;
        arr = new T[size];
    }

    T dotProduct(Vector &v){
        T d = 0;
        for(int i = 0; i < size; i++){
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main(){
    Vector<float> v1(3);
    v1.arr[0] = 4.7;
    v1.arr[1] = 3.6;
    v1.arr[2] = 1.3;
    Vector<float> v2(3); //vector 2
    v2.arr[0]=1;
    v2.arr[1]=0;
    v2.arr[2]=1.1;
     
     float a = v1.dotProduct(v2);
     cout << "The dot product of v1 and v2 is: " << a;  
    return 0;
}