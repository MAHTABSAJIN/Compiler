#include<iostream>
using namespace std;

int main()
{
    int n=4;
    int arr[n];

    cout<<"ARRAY ELEMENT"<<endl;
      for(int i=0 ; i<n; i++){

        cin>>arr[i];
    }

    float val=arr[0];

    for(int i=0;i<n;i++)
    {
        if(val>arr[i])
        {
            val=arr[i];
        }
    }
    cout<<"Minimum Value ="<<val<<endl;

    for(int i=0;i<n;i++)
    {
        if(val<arr[i])
        {
            val=arr[i];
        }
    }
    cout<<"Maximum Value ="<<val<<endl;

    return 0;
}
