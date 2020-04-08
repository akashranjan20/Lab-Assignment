#include<iostream>
using namespace std;
class greatest
{
	private:
		int x;
		int y;
		int z;
    public:
    	void input();
    	void calc();
};
void greatest::input()
{
    cout<<"Enter 3 numbers";
    cin>>x>>y>>z;
}
void greatest::calc()
{
    int r;
   	r=((x>y)&&(x>z)?x:(y>x)&&(y>z)?y:z);
    cout<<"Greatest no:"<<r;
}
int main()
{
	greatest g;
	g.input();
	g.calc();
	return 0;
}
 


