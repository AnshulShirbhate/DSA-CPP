#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &st, int cnt, int size){
   if(cnt == size/2){
      st.pop();
      return;
   }

   int num = st.top();
   st.pop();

   solve(st, cnt+1, size);

   st.push(num);

}

void deleteMiddle(stack<int> &inputStack, int N){
   int cnt=0;
   solve(inputStack, cnt, N);
}


int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    deleteMiddle(st, st.size());
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

}