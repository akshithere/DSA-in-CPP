//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers
    bool linearSearch(int el, int N,int arr[]){
        for(int i = 0; i < N; i++){
            if(arr[i] == el) return true;
        }
        return false;
    }
    int findLongestConseqSubseq(int arr[], int N)
    {
        int maxi = -1;
      //Your code here
      for(int i = 0; i < N; i++){
          int curr = arr[i];
          int cnt = 1;
          while(linearSearch(curr+1,N,arr)){
              curr++;
              cnt++;
          }
          maxi = max(cnt,maxi);
      }
      return (maxi != -1 ? maxi : 1);
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