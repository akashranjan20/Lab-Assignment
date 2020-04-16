#include<iostream>
using namespace std;
class num
{
	int n;
	public: 
	void getdata();
    void check();
};
void num::getdata()
{
	cout<<"Enter a number:";
	cin>>n;
}
void num::check()
{
	if(n%2==0)
		cout<<"Number is EVEN";
	else
		cout<<"Number is ODD";
}
int main()
{
	num n1;
	n1.getdata();
	n1.check();
	return 0;
}


