#include<iostream>
using namespace std;
int main(){
    int count = 0;
    int n = 2;
    int num;
    cout<<"Enter the number of odd elements you want:";
    cin>>num;
    while(count<num){
        if(!(n&1)){
            count++;
            n += 2;
        }
        else{
            continue;
        }
    }
    n -= 2;
    while(n>0){
        cout<<n<<"\n";
        n-=2;
    }
    return 0;
}