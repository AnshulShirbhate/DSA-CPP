#include<iostream>
using namespace std;
class Inlinedemo
{
    public:
    	int square(int s);
};
inline int Inlinedemo::square(int s)
{
	return s*s;
}
int main()
{
	Inlinedemo S;
	cout<<"Square of a No is : "<<S.square(10);
	return 0;
}
