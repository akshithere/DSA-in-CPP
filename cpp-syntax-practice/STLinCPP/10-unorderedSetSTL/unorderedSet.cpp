#include <iostream>
using namespace std;

#include <unordered_set>
//LowerBound and UpperBound does not work here 
// Baaki every function is similar to mutliSets and normal sets
//Here 1.Uniqueness property is followed
// 2.Sorted property is not followed
//The time complexity is very good i.e O(1)
//Once in a blue moon it goes as bad as O(n) but usually it stays O(1)

int main(){
unordered_set<int>us;
for(int i = 0; i <= 10; i++){
    us.insert(i);
}
cout << "Printing the unordered set" << endl;
for(int i : us){
    cout << i << endl;
}


    return 0;
}