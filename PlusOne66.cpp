#include<iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
        if (digits.empty()) {
        return {1}; // Handle the case when the input is an empty vector
    }
        if(digits.back() != 9){
            int num = digits.back()+1;
            digits.pop_back();
            digits.push_back(num);
            return digits;
        }else{
            int i = digits.size()-1;
            do{
                digits[i] = 0;
                if (i - 1 >= 0) {
                    digits[i - 1] = digits[i - 1] + 1;
                }
                i--;
            }while(i >= 0 && digits[i] == 10);
            if(digits.front() == 0){
                digits.insert(digits.begin(), 1);
            }
            return digits;
        } 
    }

int main(){
    int size;
    cout<<"Enter the size of the vector: ";
    cin>>size;
    cout<<"Enter the elements of the vector: ";
    vector<int> digits(size);
    for(int i=0; i<digits.size(); i++){
        cin>>digits[i];
    }
    plusOne(digits);
    for(int i=0; i<digits.size(); i++){
        cout<<digits[i]<<" ";
    } 
}
