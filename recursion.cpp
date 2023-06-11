#include<bits/stdc++.h>
using namespace std;
//1 to N
void print(int i, int n){
    if (i>n) return;
    cout<<i<<endl;
    print(i+1,n);
}
// N to 1
void print1(int i, int n){
    if (i<1) return;
    cout<<i<<endl;
    print1(i-1,n);
}
int sum(int x){
    if (x == 0) return x;
    return (x + sum(x-1));
}
int factorial(int x){
    if (x == 1) return x;
    return (x * factorial(x-1));
}
bool stringPalindrome(int i, string &s){
    if(i>=s.size()/2) return true;
    if(s[i] != s[s.size()-i-1]) return false;
    return stringPalindrome(i+1,s);
}
int fibonacci(int n){
    if(n<=1) return n;
    int l= fibonacci(n-1);
    int sl= fibonacci(n-2);
    return l + sl;
}
int main(){
    int n;
    cin>>n;
    //string s;
    //cin>>s;
    //cout<<stringPalindrome(0,s)<<endl;
    //print(1,n);
    //print1(n,n);
    //cout<<sum(n)<<endl;
    //cout<<factorial(n)<<endl;
    cout<<fibonacci(n);
    return 0;
}