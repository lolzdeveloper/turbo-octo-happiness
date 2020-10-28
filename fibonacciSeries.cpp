#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    if(n==0){
        cout<<"Please Enter a Value More Than Zero"<<endl;
    }
    else if(n==1){
        cout<<"0"<<endl;
    }
    else if(n==2){
        cout<<"1"<<endl;
    }
    else{
        int a=0, b=1, i=3;
        cout<<a<<" "<<b<<" ";
        while(i<=n){
            int temp = a + b;
            cout<<temp<<" ";
            a = b;
            b = temp;
            i++;
        }
    }
    



    return 0;
}