#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

int main(){
    // 
    int count;
    for(int i=0; i < 5; i++){      

        if(i%2==0)count = 1;
        else count = 0;       
        
        for(int j = 0; j <= i; j++){
          
            cout << count;
            // Flipping logic 
            count = 1 - count;
            // count = 1 - 0; = 1;
            // count = 1 - 1 = 0;


        }
        cout << "\n";
    }
    return 0;
}