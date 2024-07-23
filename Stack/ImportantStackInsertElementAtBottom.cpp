#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &myStack, int x){
    if(myStack.empty()){
        myStack.push(x);
        return;
    }

    int num = myStack.top();
    myStack.pop();

    solve(myStack, x);
    myStack.push(num);
}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack, x);
    return myStack;
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    stack<int> ans = pushAtBottom(st, 0);
    while(!ans.empty()){
        cout<<ans.top()<<" ";
        ans.pop();
    }

}