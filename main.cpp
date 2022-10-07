#include <iostream>

using namespace std;
int fib(int n){
int arr[n];
arr[0]=0;
arr[1]=1;
for(int i=2; i<(n);i++){
    arr[i]=arr[i-1]+arr[i-2];
}
return arr[n];


}
int main()
{
    int n;
    cin>>n;
    if(n<=1)
        cout<<"while loop"<<n<<endl;
    int t1,t2,t3;
    t1=t3=0;
    t2=1;
    while(n!=1){
        t3=t2+t1;
        t1=t2;
        t2=t3;
        n--;
    }
    cout<<t3<<endl;
    //fabonacia series _tBULtuin
 cout<<"dynamic programing"<<"   "<<fib(n)<<endl;
    return 0;
}
