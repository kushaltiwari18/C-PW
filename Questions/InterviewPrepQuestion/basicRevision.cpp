#include<iostream>
using namespace std;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int i=6;
    int j=7;
    int &k = i;
    swap(i,j);
    cout<<i<<" "<<j<<endl;
    cout<<k<<endl;
    cout<<&k<<endl;
    return 0;
}