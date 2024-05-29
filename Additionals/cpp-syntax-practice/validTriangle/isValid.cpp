#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << "Enter the 3 sides of triangle";
    cin >> a;
    cin >> b;
    cin >> c;
    if((a+b)>c){
        if((b+c)>a){
            if((c+a)>b){
                cout << "Indeed the triangle is valid";
            }else{
                cout << "Traingle not valid";
            }
        }else{
            cout << "Triangle not valid";
        }
    }else{
        cout << "Triangle not valid";
    }
}