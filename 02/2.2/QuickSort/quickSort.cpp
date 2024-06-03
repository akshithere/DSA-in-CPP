#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

void quickSort(int arr[],int low, int high, int n){
if(low >= high) return;
int mid = (low+high)/2;

int pvt = arr[low];
int left = low;
int right = high;
while(left <= right){

    while(left <= right && arr[left] <= pvt ){
    left++;
}
while(left <= right && arr[right] >= pvt){
    right--;
}
if(left < right){
swap(arr[left],arr[right]);
}

}
swap(arr[right],arr[low]);
// isse maine kya kiya step 1 -> pvt liya
// 2-> uski correct position find ki and smaller values on left and bigger values on right
quickSort(arr,low,right-1,n);
quickSort(arr,right+1,high,n);
// recursively jab call hoga toh direct mid nhi nikalenge
// like merge sort and stuff instead we will partition the
// array and then left part ko recursively quick sort kiya
// untill single elements vale array tak nhi phunch jate i.e
// low <= high and then right part will get quick sorted
}

int main(){
    int arr[] = {5,4,6,7,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1,n);
cout << "After performing quick sort on arr: \n";
    for(auto i: arr){
        cout << i << endl;
    }
    return 0;
}