#include<iostream>
using namespace ::std;



int main()
{
int a = 10;
int *p = &a;
cout<<*p<<endl;
int **q = &p;
cout<<*q<<" "<<p<<endl;
int b = 20;
*q = &b;
cout<<&b<<endl<<p<<endl<<q<<endl;
(*p)++;
cout << a << " " << b << endl;


}

