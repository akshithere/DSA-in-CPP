#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>

int missingNumber(vector<int>&a, int N) {
    // Write your code here.
    sort(a.begin(),a.end());
    for(int i = 0; i < N; i++){
        if(a[i] != i+1) return i+1;
    }
}