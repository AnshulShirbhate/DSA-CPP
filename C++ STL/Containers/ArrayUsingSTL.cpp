/*
    Various methods of array stl:

    1. .size() : Returns the total of number of elements present in the array.
    2. .at(index_number): Returns the element at the specified index number.
    3. .front(): Returns the first element of the array.
    4. .back(): Returns the last element of the array.
    5. .empty(): Returns 1 if the array is empty and 0 if the array is not empty.

*/

#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int, 5> arr= {1,2,3,4, 5};
    int size = arr.size();
    int firstelement = arr.front();
    int lastelement = arr.back();
    int arrat = arr.at(2);
    int arremptyornot = arr.empty();
    cout<<"Size: "<<size<<endl;
    cout<<"First Element: "<<firstelement<<endl;
    cout<<"Last Element: "<<lastelement<<endl;
    cout<<"Array at index 2: "<<arrat<<endl;
    cout<<"Array is empty or not?: "<<( arremptyornot == 0 ? "Not Empty" : "Empty")<<endl;

    return 0;
}