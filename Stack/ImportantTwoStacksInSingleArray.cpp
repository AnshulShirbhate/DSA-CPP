class TwoStack {
private:
int *arr;
int top1;
int top2;
int  size;
public:

    // Initialize TwoStack.
    TwoStack(int s) {
        // Write your code here.
        this -> size = s;
        this -> top1 = -1;
        this -> top2 = size;
        arr = new int[s];
    }
    
    // Push in stack 1.
    void push1(int num) {
        // Write your code here.
        if(top2 - top1 > 1){
            top1++;
            arr[top1] = num;
        }
    }

    // Push in stack 2.
    void push2(int num) {
        if(top2 - top1 > 1){
            top2--;
            arr[top2] = num;
        }
        // Write your code here.
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        // Write your code here.
        if(top1 >= 0){
            int ans = arr[top1];
            top1--;
            return ans;
        }else{
            return -1;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        // Write your code here.
        if(top2 < size && top2 >=0){
            int ans = arr[top2];
            top2++;
            return ans;
        }else{
            return -1;
        }
    }
};