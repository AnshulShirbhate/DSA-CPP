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
	Inlinedemo S[5];
    int n;
	for(int i=0;i<5;i++)
	{
        cout<<"Enter the number: ";
        cin>>n;
		cout<<"Square of a No is : "<<S[i].square(n)<<endl;
	}
	return 0;
}
