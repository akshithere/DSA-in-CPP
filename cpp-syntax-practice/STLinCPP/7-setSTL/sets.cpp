#include <iostream>
#include <set>
using namespace std;
int main(){
    //
    set<float>mySet = {1,2,2};

    mySet.insert(69);
    mySet.insert(1);
    mySet.insert(4);
    mySet.insert(3);

    set<float>::iterator it = mySet.find(69);
    auto it2 = mySet.find(700); // it will return the memory address one after the last element 69
    // This can be verified by ->
    // it2--; This is the same memory address as the last element 69 
    cout << "The memory address of element 69 is: " << &(*it) << endl;
    cout << "The memory address of last element is: " << &(*it2) << endl;
    for(float i:mySet){
    cout << i << endl;
    }

    mySet.erase(4); //Takes logarithmic time
    int cnt = mySet.count(69);
     // .count() will either have 0 or 1 occurences as the elements in set are unique and sorted;
     cout << "Deleting everything between first and last element: " << endl;
     auto itA = mySet.find(2);
     auto itB = mySet.find(69);
     // erase mein as far as i remember the last element is exclusive toh pure last ka iterator dena
    // hoga shyd;
    mySet.erase(itA,itB);
    cout << "After erasing-" << endl;
    for(float i:mySet){
    cout << i << endl;
    }

    auto ind = distance(mySet.lower_bound(1),mySet.lower_bound(69));
    cout << "The index between 1 and 69 is: " << ind << endl;
    return 0;
}