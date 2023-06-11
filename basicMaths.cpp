#include <bits/stdc++.h>
using namespace std;
void digits(int n){
    int l;
    while(n>0){
    l=n%10;
    cout<<l<<endl;
    n=n/10;
    }
}
int revers(int n){
    int l;
    int sum=0;
    while(n>0){
    l=n%10;
    n=n/10;
    sum=(sum*10)+l;
    } cout<<sum<<endl;
    return sum;
}
void palindrome(int n,int y){
    if (n==y){
        cout<<"Palindrome"<<endl;
    } else{
        cout<<"Not Palindrome"<<endl;
    }
}
void armstrong(int n){
    int l;
    int sum=0;
    while(n>0){
    l=n%10;
    n=n/10;
    sum=(sum*10)+(l*l*l);
    } 
    if(sum==n){
        cout<<"Armstrong"<<endl;
    }else{
        cout<<"Not Armstrong"<<endl;
    }
}
void divisor(int n){
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<i<<" ";
        }
        if((n/i)!=1){
            cout<<n/i<<" ";
        }
    }
    cout<<endl;
}
void prime(int n){
    int count=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            count++;
        }
        if((n/i)!=1){
            count++;
        }
    }
        if(count==2){
            cout<<"Prime"<<endl;
        } else{
            cout<<"Not Prime"<<endl;
        }
}
void gcd(int a,int b){
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        } else
            b=b%a;
        }
        if(a==0) cout<<b<<endl;
        cout<<a<<endl;
}
int main() {
    int x;
    cin>>x;
    digits(x);
    int r = revers(x);
    palindrome(x,r);
    armstrong(x);
    divisor(x);
    prime(x);
    gcd(x,r);
    return 0;
}