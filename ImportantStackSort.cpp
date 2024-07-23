#include<iostream>
#include<stack>
using namespace std;

void sortedInsert(stack<int> &stack, int num){
	if(stack.empty() || (!stack.empty() && stack.top() < num)){
		stack.push(num);
		return;
	}

	int n = stack.top();
	stack.pop();

	sortedInsert(stack, num);
	stack.push(n);
}

void sortStack(stack<int> &stack)
{
	if(stack.empty()){
		return;
	}

	int num = stack.top();
	stack.pop();

	sortStack(stack);

	sortedInsert(stack, num);
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(10);
    st.push(7);
    st.push(5);
    
    sortStack(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

}