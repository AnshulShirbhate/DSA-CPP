#include<iostream>
using namespace std;

class stack{
    private:
    int top=-1;
    int size;
    int *arr = new int[size];

    public:
    stack(int size){
        this -> size = size;
    }

    void push(int val){
        if(top == size - 1){
            cout<<"Stack is full!"<<endl;
        }else{
            top++;
            arr[top] = val;
            cout<<"Value: "<<val<<" Inserted!"<<endl;
        }
    }

    void pop(){
        if(top == -1){
            cout<<"Stack is empty!"<<endl;
        }else{
            top--;
            cout<<"Element Popped!"<<endl;
        }
    }

    bool empty(){
        if(top == -1){
            return 1;
        }else{
            return 0;
        }
    }

    void display(){
        if(top == -1){
            cout<<"Nothing to display!"<<endl;
        }else{
            cout<<"Stack elements are: "<<endl;
            for(int i=top; i>=0; i--){
                cout<<arr[i]<<endl;
            }
        }
    }
};

int main(){
    stack st(10);
    st.push(1);
    st.push(2);
    st.push(3);
    st.display();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.display();
    cout<<st.empty()<<endl;
    st.push(1);
    cout<<st.empty()<<endl;
}