// Take count and element variables, set count to 0 and do not initialize the element. If count is zero take element as the index 
// element and whenever that element occurs increase the count and if other element appears decrease the count. At the end we will get
// the majority element.

#include<iostream>
#include<vector>
using namespace std;

int findMajorityElement(vector<int> &arr){
    int count=0;
    int element;
    for(int i=0; i<arr.size(); i++){
        if(count == 0){
            element = arr[i];
            count=1;
        } else if(arr[i] == element){
            count++;
        } else {
            count--;
        }
    }
    return element;
}

int main(){
    // vector<int> arr = {7, 7, 5, 7, 5, 1, 5, 7, 5, 5, 7, 7, 5, 5, 5, 5};
    vector<int> arr = {5, 7, 7, 7, 7, 2, 1, 5, 7, 5, 5, 7, 7, 5, 5, 5, 7};

    int ans = findMajorityElement(arr);
    cout<<"The majority element is: "<<ans;
}