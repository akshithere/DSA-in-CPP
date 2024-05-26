class Solution{
public:    
    bool isPalindrome(int x){
        //Reverse 
        long int reversed = 0;
        long int temp = x;
        while(temp > 0){
            int digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /= 10;
        }
        return(x == reversed);
    }
};