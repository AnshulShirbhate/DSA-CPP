// Check lecture number 58 of love babbar's C++ placement series for the solution and explanation of this program and solving technique.


#include<iostream>
#include<vector>

class NStack
{
    int *arr;
    int *top;
    int *next;
    int n, s;
    int freespot;
public:
    // Initialize your data structure.
    NStack(int N, int S)
    {
        // n is the number of stacks
        n = N;

        // s is the size of the array.
        s = S;
        arr = new int[s];
        top = new int[n];
        next = new int[s];

        for(int i=0; i<n; i++){
            top[i] = -1;
        }
        // memset(top, -1, sizeof(top));
        
        for(int i=0; i<s; i++){
            next[i] = i+1;
        }

        next[s-1] = -1;

        freespot = 0;


    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        if(freespot == -1){
            return false;
        }

        int index = freespot;
        freespot = next[index];
        arr[index] = x;

        next[index] = top[m-1];
        top[m-1] = index;
        return true;
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        if(top[m-1] == -1){
            return -1;
        }
        int index = top[m-1];
        top[m-1] = next[index];

        next[index] = freespot;
        freespot = index;
        return arr[index];

    }
};

int main(){

}