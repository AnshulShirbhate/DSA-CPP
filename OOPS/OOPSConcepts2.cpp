// Lecture 43 Love Babbar C++ Placement course

/*
    OOPS Concepts:
    1. Encapsulation: Wrapping up data members and function in a single entity called class.
    
    -> Fully encapsulated class: A class in which every data member is private is known as fully encapsulated class.
    -> Information/Data hiding is encapsulation.
    -> Code reusability
    -> Unit testing

    2. Inheritance: Inheriting properties of a base class into a sub class or child class.

    syntax for inheritance:
        class ChildClass : access-modifier BaseClass{

        };
    
    To learn about access modifier's role in inheritance watch lecture 43 of love babbar c++ placement course at time 24:00 mins.
    In simple way, 
        if data member is private in base class then it will not be inherited in the child class.
        if data member is public in base class then it can be public, protected and private in child class.
        if data member is protected in base class then it can be protected and private in child class.

    

    ***Types of Inheritance:***
    1. Single
    2. Multi level
    3. Multiple
    4. Hybrid
    5. Hierarchical

    2. Multi level:  
    class a -> class b -> class c
    In this class b is inheriting class a and class c is inheriting class b. Therefore class c have both the properties of 
    class a and b.

    3. Multiple:
    class a -> class c  
    class b -> class c
    In this one class inherits multiple classes like the c class is inheriting class a and class b.
    syntax: class c : access-modifier a, access-modifier b

    4. Hybrid:
    Combination of more than one type of inheritance.

    5. Hierarchical:
    class a -> class b
    class a -> class c
    In this class a is inherited in class b and class c. Hence it is called hierarchical inheritance.
     

    ***Inheritance Ambiguity***
    a -> b
    a -> c
    b -> d 
    c -> d
    In this case the function of a class will be inherited in the class d from class b and class c creating ambiguity. 
    Here scope resolution operator( :: )  plays it's role.
    Ex:
    d obj;
    obj.c::func();  with this the function of c will be used which is the same in b.


    ***Polymorphism***
    Poly - Many
    Morph - Forms
    Existing in multiple forms means polymorphism.

    Types:
    1. Compile time polymorphism
    2. Run time polymorphism

    Function overloading:
    We can write many function of the same name but with different parameters in the same class. This is basically polymorphism.
    Return type of function changing is not ploymorphism and is not allowed in c++.


    Operator Overloading:
    syntax: void operator<operator ex: +> (ClassName ObjectName){
        return this -> val - ObjectName.val;
    }
    int main(){
        ClassName ObjectName1, ObjectName2;
        ObjectName1 + ObjectName2;
    }
    In this example we overloaded the + operator and when we add two objects it performs minus operation inside.


    Run time polymorphism:
    When we use method over riding then it is known as run time polymorphism.
    Method over riding is basically having the same function name in the base class as well as child class and when we create object
    of one class then it's function is called rather than the other class's function.
*/

#include<iostream>
#include<string>
using namespace std;


//Inheritance Example

class Human{
    private:
        int height;
        int weight;
        int age;

    public:
        int getAge(){
            return this -> age;
        }

        void setAge(int age){
            this -> age = age;
        }

        void setWeight(int weight){
            this -> weight = weight;
        }

        int getWeight(){
            return this -> weight;
        }
};

class Male : public Human{
    private:
        char gender = 'M';
        string color = "Brown";

    public:
        char getGender(){
            return this -> gender;
        }

        string getColor(){
            return this -> color;
        }
};

// Inheritance example end


int main(){
    Male M1;
    M1.setAge(10);
    cout<<"Age: "<<M1.getAge()<<endl;;
    cout<<"Color: "<<M1.getColor()<<endl;
}