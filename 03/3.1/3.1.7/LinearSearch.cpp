#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;
int linearSearch(int arr[], int n, int el){
    for(int i = 0; i < n; i++){
        if(arr[i] == el){
            return i;
        }
    }
    return -1;
}
int main(){
//    Linear Search // 
int arr[] = {1,2,3,4,5,6};
int n = 6;
cout << "The element 3 found at index-> " <<  linearSearch(arr,6,3);
 return 0;
}