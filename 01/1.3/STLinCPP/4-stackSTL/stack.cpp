#include <iostream>
using namespace std;
#include <stack>
int main(){
    stack<float>st;
    st.push(6.69);
    st.push(2.234);
    cout << "The size is: " << st.size() << endl;
    st.emplace(69.4);
    st.push(3.24);
    while(!st.empty()){
        float i = st.top();
        st.pop();
        cout << i << endl;
    }

    
    return 0;
}