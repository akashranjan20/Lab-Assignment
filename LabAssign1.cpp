#include <iostream>
using namespace std;
class Numbers
{
	private:
		int a;
		int b;
	public:
		void readNumbers(void);
		void printNumbers(void);
		int Addition(void);
};
void Numbers::readNumbers(void)
{
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;	
}

void Numbers::printNumbers(void)
{
	cout<<"a= "<<a<<",b= "<<b<<endl;
}

int Numbers::Addition(void)
{
	return (a+b);
}
int main()
{
	Numbers num;
	int add; 
	num.readNumbers();
	add=num.Addition();
	num.printNumbers();
	cout<<"Addition= "<<add<<endl;
	return 0;	
}

