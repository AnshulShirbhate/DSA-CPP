/*
    Stack is a data structure which follows the LIFO(Last In First Out) policy.
    Declaration of stack:

        stack<data_type> stack_name;


    Various methods of stack: 

        1. .push(data): Push the data on top of the stack.
        2. .pop(): Pops the top of the data;
        3. .size(): Returns the size of the stack.
        4. .empty(): Returns 1 is stack is empty and 0 if not empty. 
        5. .top(): Returns the element at the top of the stack.
        6. 
*/

#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> stk;

    stk.push("Anshul");
    stk.push("Shailesh");
    stk.push("Shirbhate");

    stk.pop();

    cout<<stk.top()<<endl;

    cout<<stk.size()<<endl;
    cout<<stk.empty()<<endl;

}