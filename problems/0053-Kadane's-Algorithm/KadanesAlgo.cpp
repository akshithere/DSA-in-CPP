#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    long long maxSubArray(vector<int>& nums) {
        long long iterationSum = 0;
        long long finalSum = nums[0];
        for(int i = 0; i < nums.size(); i++){
            iterationSum += nums[i];
                if(finalSum < iterationSum){
                    finalSum = iterationSum;
                }
                if(iterationSum < 0){
                    iterationSum = 0;
                }
        }
        return finalSum;
    }
};


/*The Kadane's Algorith is basically jab tumhare pass sum less than 0 ho jaye
aur tumhe max consecutive subarray nikalna hai toh no need ti consider the
negative iterationSum kyuki vo tere aage vale finalSum ko kam hi karega
so a simple if condition is used
*/