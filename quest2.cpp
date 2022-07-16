#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter how many natural numbers you want: ";
    cin>>n;
    int k = 1;
    while(k<=n){
        cout<<k<<"\n";
        k++;
    }
    return 0;
}