#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    cout << "The maximum element is: " << *max_element(arr,arr+5) << endl;
    cout << "The minimum element at address" << &(*min_element(arr,arr+5)) << " is: " << *min_element(arr,arr+4) << endl;
    return 0;
}