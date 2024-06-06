#include <algorithm>
#include <vector>
using namespace std;



// Two Pointer Approach -> One pointer at unique element
// other pointer iterates till it find another unique element
// upon finding the another unique element just put that element in front of the previous unique
// and change the initial pointer to this newly found unique element

int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	// Two pointer approach to remove duplicates
	int i = 0;

	for(int j = 1; j < n; j++){
		if(arr[i] != arr[j]){
			arr[i+1] = arr[j];
			i++;
		}
	}
	return i+1;
}
int main(){
    vector<int>arr = {1,1,2,2,2,3,3};
    removeDuplicates(arr,arr.size());
}