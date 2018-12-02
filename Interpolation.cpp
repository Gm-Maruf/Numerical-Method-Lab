#include<bits/stdc++.h>
using namespace std;



class NewtonInterpolation
{
public:
    void askN();
    void askX();
    void askF();
    void askXX();
    void forwardTable();
    void calcfrd();
    void calcbkrd();
    void findH();
    void findS();
private:
    double XX, x[10] , f[10][10] , p[10];
    double diff[5][5], P1;
    int num;
    double h,s;

};

void NewtonInterpolation::askX()
{
    int n;
    cin>>n;
    cout << endl;
    for(int i = 0; i<n; i++ )
    {
        cout << "Enter X[" << i  << "] : ";
        cin >> x[i];
    }
    cout << endl;
}

void NewtonInterpolation::askF()
{
    int n;
    cin>>n;
    cout<<endl;
    for(int j=0; j<n; j++)
    {
        cout << "Enter F[" << j << "] : ";
        cin >> f[0][j];
    }
    cout << endl;
}

void NewtonInterpolation::askXX()
{

    cout << "Enter X for which the value is to be found: ";
    cin >> XX;
}

