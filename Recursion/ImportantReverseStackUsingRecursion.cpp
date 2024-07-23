#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &stack, int val){
    if(stack.empty()){
        stack.push(val);
        return;
    }

    int num = stack.top();
    stack.pop();

    insertAtBottom(stack, val);
    stack.push(num);
}

void reverseStack(stack<int> &stack) {
    if(stack.empty()){
        return;
    }

    int num = stack.top();
    stack.pop();

    reverseStack(stack);

    insertAtBottom(stack, num);
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout<<"Before Reversing: "<<endl;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    reverseStack(st);
    cout<<endl<<"After Reversing: "<<endl;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

}