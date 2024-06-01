#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;
void reverseArray(int arr[],int size, int l){
    // swapping logic with one variable
    // r ko replace kar diya in terms of l
    if(l >= size/2) return;
    int temp = arr[l];
    arr[l] = arr[size-1-l];
    arr[size-1-l] = temp;

    reverseArray(arr,size,l+1);
}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr,size,0);
    cout << "Iterating the reversed array using only one pointer: \n";
    for(auto i : arr){
        cout << i << "\n";
    }
 return 0;
}