#include<iostream>
using namespace std;
int main(){
    int k;
    cout<<"Enter the number whose table you want:";
    cin>>k;
    int n = 1;
    while(n<=10){
        cout<<k<<" x "<<n<<" = "<<k*n<<"\n";
        n++;
    }
    return 0;
}