#include<iostream>
#include<cmath>
using namespace std;
void fib(int n){
    int t1=0;
    int t2=1;
    int nextterm;

    for (int i=1;i<=n;i++){
        cout<<t1<<endl;
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }
    return;
}
int main(){
    int n;
    cout<<"enter the number of terms upto which you want to print the fibonacci sequence: "<<endl;
    cin>>n;

    fib(n);
    return 0;
}