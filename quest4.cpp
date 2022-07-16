#include<iostream>
using namespace std;
int main(){
    int count = 0;
    int n = 1;
    int num;
    cout<<"Enter the number of odd elements you want:";
    cin>>num;
    while(count<num){
        if(n&1){
            cout<<n<<"\n";
            count++;
            n += 2;
        }
        else{
            continue;
        }
    }
    return 0;
}