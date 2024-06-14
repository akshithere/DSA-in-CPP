//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      set<int>s;
      int prev = INT_MIN;
      for(int i = 0; i < N; i++){
          s.emplace(arr[i]);
      }
      int longestConsecutiveInteger = 0;
      int count = 0;
      for(auto i : s){
          if(i == (prev+1)){
             count++;
          }else{
              count = 1;
          }
    longestConsecutiveInteger = max(longestConsecutiveInteger,count);
          prev = i;
      }
      return longestConsecutiveInteger;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends