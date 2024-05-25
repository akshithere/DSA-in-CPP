#include <iostream>
using namespace std;
#include <cstring>
#include <string>
class Solution {
public:
    int romanToInt(string s) {
        // There are six instances where instead of addition, subtraction
        // is used;
        
        int sum = 0;
        int i = 0;
        char nextChar;
        
        while(s[i] != '\0'){
            cout << "The sum currently is: " << sum << endl;
            if(i>=0){
                nextChar = s[i+1];
            }
            char c = s[i];
            cout << "The case c is: " << c << endl;
            
            cout << "Next Char is: " << nextChar << endl;
            i++;
            if(nextChar == 'V'&& c == 'I'){
                i+=1;
                sum+=4;
                continue;
            }
            if(nextChar == 'X'&& c == 'I'){
                i+=1;
                sum+=9;
                continue;
            }
            if(nextChar == 'L'&& c == 'X'){
                i+=1;
                sum+=40;
                continue;
            }
            if(nextChar == 'C'&& c == 'X'){
                i+=1;
                sum+=90;
                continue;
            }
            if(nextChar == 'D'&& c == 'C'){
                i+=1;
                sum+=400;
                continue;
            }
            if(nextChar == 'M'&& c == 'C'){
                i+=1;
                sum+=900;
                continue;
            }
            switch(c){
            case 'I':
            
            sum+=1;
            break;
            case 'V':
            sum+=5;
            break;
            case 'X':
            sum+=10;
            break;
            case 'L':
            sum+=50;
            break;
            case 'C':
            sum+=100;
            break;
            case 'D':
            sum+=500;
            break;
            case 'M':
            sum+=1000;
            break;

        }
        }
        // string ko array
        // array ki each item ko map karke usse plus karke sum nikaal de
        // take care of instances where subtraction is used
        
        return sum;
    }
};
int main(){
    Solution obj;
    int sum = obj.romanToInt("MCMXCIV");
    cout << "The sum is: " << sum;
}