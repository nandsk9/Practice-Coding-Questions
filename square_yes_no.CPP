/* Given a input number n, find whether square of this number end with n  or not 
if end print "yes" else "no"  */


#include <iostream>
using namespace std;

int main()
{
    int n,k,m;
    cout<<"enter the no"<<endl;
    cin>>n;
    k=n*n;
    cout<<"square : " <<k<<endl;    
    m=k%10;
    //cout<<m<<endl;    
    if(n==m){
        cout<<"yes "<<endl;        
    }else {
        cout<<"no"<<endl;
    }
}

