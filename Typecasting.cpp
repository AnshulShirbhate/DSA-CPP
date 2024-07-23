#include<iostream>
using namespace std;

int main()
{
    char var1 = 'A';
    int var2 = 1;

    //Here as we are adding char and int values the priority for int is higher. Therefore when the output is printed the ascii value of
    //A is considered which is 65 and added with 1 i.e. var2 and hence the result 66 is produced. 
    cout<<var1+var2;


    var1 = var1+var2;
    //Here we are adding the char and int values which will produce the output in int but we are storing that number in char type variable
    //therefore the value will be output 66 in char type i.e. the character B.
    cout<<"\n"<<var1;
    return 0;
}


/*
Note: The priority sequence of data types are:
1. double, float
2. int 
3. char
4. boolean
*/


/*
There are two types of typecastings:

1. Implicit : The one which we saw above. The compiler decides which data types should be taken.

2. Explicit : In this typecasting we tell the compiler explicitly to change the datatype by using functions such as int(varname), 
              float(varname) etc. 
*/