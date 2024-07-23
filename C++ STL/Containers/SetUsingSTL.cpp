/*

    What is a SET?
    Ans: A set is a data structure which stores the elements only once even if add many instances of an element such as Example 
    5, 5 then only single 5 will be stored in the set.

    Another property of the set is that we cannot access random elements of the set.

    When we print the set the elements gets printed in sorted manner.


    Methods of set:

    1. .insert(): To insert an element in the set.
    2. .erase(): To erase elements of the set.
    3. .begin(): Returns the iterator to the start element of the set.
    4. .count(): Returns if the element is present in the set or not with return value as 0 or 1.
    5. .find(): Returns the iterator if the element exists in the set.  

*/


#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(0);
    s.insert(2);
    for(int i:s){
        cout<<i<<" ";
    }
    s.erase(s.begin());
    cout<<endl;
    for(int i:s){
        cout<<i<<" ";
    }
}