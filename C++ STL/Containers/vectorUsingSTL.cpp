/*

    Declaration of vector:

    vector<data-type> vector_name(size, initial_initializer_number)
    Example: vector<int> vec(3, 0);
    This vector named vec will contain 3 elements {0, 0, 0} as we have initialized it with 0 at declaration.

    Various methods of vector stl:

    1. .size() : Returns the total of number of elements present in the vector.
    2. .at(index_number): Returns the element at the specified index number.
    3. .front(): Returns the first element of the array.
    4. .back(): Returns the last element of the array.
    5. .empty(): Returns 1 if the vector is empty and 0 if the array is not empty.
    6. .capacity: Returns the size of the vector.
    7. .push_back(): Pushes the element at the back of the vector.
    8. .pop_back: Pops the last element of the vector.
    9. .clear(): Clears the vector.
    10. .resize(n) – Resizes the container so that it contains ‘n’ elements.
    11. shrink_to_fit() – Reduces the capacity of the container to fit its size.

*/


#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> vec;
    //Another way to declare and initialize vector
    //In the parenthesis the first argument is the size of the vector and second argument is the 
    //initialization of vector at first.
    vector <int> vec2(5, 0);

    cout<<"\nSize of vector: "<<vec2.size();
    cout<<"\nCapacity of vector: "<<vec2.capacity();
    vec2.push_back(1);
    vec2.push_back(2);
    cout<<"\nCapacity of vector: "<<vec2.capacity();
    
    cout<<endl;
    for(int i: vec2){
        cout<<i<<" ";
    }

    vec2.clear();
    cout<<"\nSize of vector: "<<vec2.size();
    cout<<"\nCapacity of vector: "<<vec2.capacity();

    cout<<"\nVector is empty?: "<<(vec2.empty()? "Empty" : "Not Empty");
    vec2.push_back(1);
    vec2.push_back(2);
    cout<<"\nFirst Element of Vector: "<<vec2.front();
    cout<<"\nLast Element of Vector: "<<vec2.back();

    cout<<endl;

    return 0;
}