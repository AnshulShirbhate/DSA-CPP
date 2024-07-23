/*

    Map: It is a data structure in c++ which stores the data in key, value pairs. Every key should be unique in map and a single key
    can point towards a single value only and different keys can point towards a single value.

    In map when we iterate through the map and print the elements it gets printed in sorted manner. In unordered map it is not sorted. 

    Properties of MAP:

    1. .first: Returns the key of the map.
    2. .second: Returns the value of the map.
    3. .insert( {key, value} ): INserts the key value pair in the map.
    4. .count(key): Returns 1 if the key is present in the map and 0 if the key is not present in the map.
    5. .erase(key): Deletes the key value pair from the map.

*/


#include<iostream>
#include<map>
using namespace std;


int main(){
    map<int, string> m;
    m[1] = "Anshul";
    m[2] = "Shirbhate";
    m[0] = "Shailesh";
    m.insert( {4, "Ram"} );

    cout<<"Before Erase: "<<endl;
    for(auto i:m){
        cout<<i.first<<" : "<<i.second<<endl;
    }

    cout<<"\nIs 2 present? -> "<<m.count(2);

    //m.erase(2);

    cout<<"\n\nAfter Erase: "<<endl;
    for(auto i:m){
        cout<<i.first<<" : "<<i.second<<endl;
    }

    cout<<endl;

    auto it = m.find(1);

    for(auto i=it; i!=m.end(); i++){
        cout<<(*i).first<<endl;
    }

}