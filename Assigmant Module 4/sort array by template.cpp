#include <iostream>

using namespace std;

template <typename X>
void swap(X &a, X &b)
{
    X temp = a;
    a = b;
    b = temp;
}

int main()
{
    int i=10, j=20;
    double x=10.1, y=23.3;
    char a='x', b='z';

    cout<<"i="<<i<<"\tj="<<j<<endl;
    cout<<"x="<<x<<"\ty="<<y<<endl;
    cout<<"a="<<a<<"\tb="<<b<<endl;

    swap(i,j);
    swap(x,y);
    swap(a,b);

    cout<<"i="<<i<<"\tj="<<j<<endl;
    cout<<"x="<<x<<"\ty="<<y<<endl;
    cout<<"a="<<a<<"\tb="<<b<<endl;

    return 0;
}