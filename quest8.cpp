#include<iostream>
using namespace std;
int main(){
    int k;
    cout<<"Enter the number of elements you want:";
    cin>>k;
    int n = 1;
    while(n<=k){
        cout<<n*n<<"\n";
        n++;
    }
    return 0;
}