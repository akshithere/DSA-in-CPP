#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

int findMissing(vector<int>arr, int N){
int summation = (N*(N+1))/2;
int arrSum = 0;

for(int i = 0; i < arr.size(); i++){
    arrSum+= arr[i];
}
return (summation - arrSum);
}

// O(N) is the time complexity because iteration over the whole array for the array sum
// But we have constant space complexity as we have only two extra variables to solve the problem

int main(){
   vector<int>arr = {1,2,4,5};
   int N = 5;
   cout << "The missing number is: " << findMissing(arr,N); 
    return 0;
}