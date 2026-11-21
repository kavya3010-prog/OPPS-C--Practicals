#include<iostream>
using namespace std;
class Matrix
{
    int a[2][2];
public:
    void get()
    {
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
            cin>>a[i][j];
    }
    Matrix operator+(Matrix m)
    {
        Matrix temp;
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
            temp.a[i][j]=a[i][j]+m.a[i][j];
        return temp;
    }
    Matrix operator*(Matrix m)
    {
         Matrix temp;
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
            {
                temp.a[i][j]=0;
                for(int k=0;k<2;k++)
            temp.a[i][j] +=a[i][k]* m.a[k][j];
            }
        return temp;
    }
    void display()
    {
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++)
                cout<<a[i][j]<<"";
                cout<<endl;
        }
    }
};
int main()
{
    Matrix A,B,C,D;
    cout<<"Enter elements of Matrix A:\n";
    A.get();
    cout<<"Enter elements of Matrix B:\n";
    B.get();
    C=A+B;
    D=A*B;
    cout<<"Matrix addition:\n";
    C.display();
    cout<<"Matrix multiplication :\n";
    D.display();
    return 0;
}
