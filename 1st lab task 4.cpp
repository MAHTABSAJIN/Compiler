#include<iostream>
using namespace std;

int main()
{
    int n;
    int factorial=1;

    cout<<"Enter the value "<<endl;
    cin>>n;


    for( int i=n;i>0;i--)
    {
        factorial=factorial*i;
    }
    cout<<"Factorial value="<<factorial<<endl;

}
