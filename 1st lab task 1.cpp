#include<iostream>
using namespace std;


int main(){

    int n=4;
    int arr[n];
    cout<<"ARRAY ELEMENT="<<endl;
    for(int i=0 ; i<n; i++){

        cin>>arr[i];
    }

  float sum=0;

for( int i=0; i<n; i++){

   sum+=arr[i];

}
 cout<<"AVERAGE VALUE= "<<sum/n<<endl;

return 0;
}
