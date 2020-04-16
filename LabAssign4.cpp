#include<iostream>
using namespace std;
class Matrix{
    private:
        int m,n,*p,d;
    public:
        Matrix(int m,int n)
        {
            p=new int[m*n];
        }
    void get(int m,int n)
    {
        int i,j;
        cout<<"Enter the elements of the array"<<endl;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>d;
                *((p+(i*n))+j)=d;
            }
        }
    }
    void display(int m,int n)
    {
        int i,j;
        cout<<"The matrix is"<<endl;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<*(p+(i*n)+j)<<"\t";
            }
            cout<<"\n";
        }
    }
};
int main()
{
    int x,y;
    Matrix obj(x,y);
    cout<<"Enter number of rows and columns in the array";
    cin>>x>>y;
    obj.get(x,y);
    obj.display(x,y);
    return 0;
}
