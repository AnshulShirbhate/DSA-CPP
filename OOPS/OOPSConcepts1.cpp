#include<iostream>
using namespace std;

/*
    Why OOPS?
    Readability, Reuseability, Extensibility, Features.
*/


/*  If the class has no attributes or properties then the size of the class is 1 byte only for identification or tracking the class object
    class test{
        //Empty class
    };
*/

/*
    We can define classes in one file and use that class as a header file in another code by storing the class file in the same folder
    as the code in which we want to use the class and then #include "classfile-name.cpp".

    Now we can create the object of that class.
*/


/*
    Access Modifiers: 
    1. public : properties can be accesses within and outside the class.
    2. private : properties can be accessed within the class but not outside the class.
    3. protected : properties can be accessed within the class and inside the child class.

*/

/*
    Getters and Setters in OOPS:
        In OOPS getter is a function defined in a class through which we can access the values of variables that we have 
        in the class as private.

        Setters are function that we create to assign or access values of those private variables in the class.
*/

/*
    There is a concept of padding and greedy allocation in OOPS:
    Padding in Object-Oriented Programming (OOPS) refers to the process of adding extra bytes or empty spaces within a structure or 
    class to ensure that it's data members are aligned to specific boundaries in memory. This alignment is crucial for optimizing memory 
    access and improving the efficiency of the processor when fetching data.
    The alignment of data members in memory is determined by the processor's architecture. For example, a 32-bit processor typically 
    fetches data in chunks of 4 bytes, while a 64-bit processor fetches data in chunks of 8 bytes. To ensure efficient data access, 
    the compiler inserts padding bytes between data members to align them on appropriate boundaries.
*/

/*
    Dynamic memory allocation of objects can be done like this 
    ClassName *objName = new ClassName();

    In dynamic memory allocation for objects, when we try to access the members of the class we can access them like this,
    (*objName).memberName
            OR
    objName -> memberName
*/

/*
    Constructor in OOPS:
        Constructor in a class is a special function which gets invoked automatically when the object of that class is created.
        Name of contructor is same as that of class.
*/

/*
    This Keyword:
        this is basically a pointer to the object.
        this keyword is used to denote the variables of the same class. It is basically a pointer that points to the class variables.

        For example:
            class Example{
                int data;

                public: 
                    void setFunction(int data){
                        this.data = data;
                                OR
                        this -> data = data;
                    }
            };
        
        In this function what will happen is that when the argument is passed in the function then the member variable of the class
        will be updated with the given value. If we do not use the this keyword then the value in the class will not be updated and
        there will be no effect of the passed value.
            
*/

/*
    Copy constructor in OOPS:
    Example:
        ClassName obj1(2, 2);

        ClassName obj2(obj1);  In this object what we did is copied all the members values of the obj1 in obj2.
                OR
        ClassName obj2 = obj1;
*/

/*
    Shallow Copy in copy constructor:
        Default copy contructor does shallow copy that means same memory will be accessed by the copied object and if we change the 
        value of one member in the 1st object it will affect the value of the 2nd object.

    Deep Copy:
        In deep copy we can create copy without using the same memory.
        Example of function to be written:
            ClassName( ClassName& obj){
                dataType varName = new dataType;
                varName = obj.val;
                this -> val = varName;
            }
*/

/*
    Destructor in OOPS:
        Destructor is a special function used to deallocate the memory assigned to the class object.
        Example:
         ~ConstructorName(){

         }
        In case of statically declared object the destructor will be called automatically but in case of dynamically allocated
        object we have to call it manually by using the delete keyword.
*/

/*
    Static Data Member:
    Static data member is a data member which can be accessed without the need to create a class object.
    Declaration Example:
    class Name{
        static int dataMember;
    }
    int Name::dataMember = val;

    int main(){
        cout<<Name::dataMember; Good practice
        Name obj;
        cout<<obj.dataMember;  Bad practice
    }
*/

/*
    Static functions:
    Static function are functions that can be accessed without creating the class object.
    It does not have this keyword as this keyword points to the current object and static functions does not require an object to be 
    created.
    Static functions can access only static data members of the class.
*/

/*
    Friend functions:
    A friend function is a function which can access the private data members of a class and usually takes objects as input parameters.
    A friend function's body is not delcared within the class and is not a member function of the class meaning we can't call it 
    through the object of the class. 

    Delcaration in class:
    friend return-type friend-function-name(base-class-name &object-name);

    outside the class:
    return-type friend-function-name(baseclass-name &object-name){
        //body
    } 
*/

// #include<iostream>
// using namespace std;
// class test{
    
// };
// int main(){
//     test t;
    
//     cout<<sizeof(t);

// }


class TestClass{
    private:
        int test1;
        int test2;
        int test3;

    public:
        TestClass(){
            
        }

        TestClass(int test1, int test2, int test3){
            test1 = this->test1;
            test2 = this->test2;
            test3 = this->test3;
        }
    
        void setter(int val1, int val2, int val3){
            test1 = val1;
            test2 = val2;
            test3 = val3;
        }

        void getter(){
            cout<<"\nTest1: "<<test1<<endl;
            cout<<"Test2: "<<test2<<endl;
            cout<<"Test3: "<<test3;
        }
};

class ChildTest: public TestClass{
    int var1=5;
};

int main(){
    TestClass obj(1, 2, 3);
    obj.setter(4, 5, 6);
    obj.getter();
    ChildTest t;
    t.setter(4, 5, 6);
    t.getter();
}