#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;
long long F[50];
long long fib_rec(long long n){
    if(F[n] >= 0){
        return F[n];
    } else {
        F[n] = fib_rec(n-1) + fib_rec(n-2);
        return F[n];
    }
}
void fib(long long n){
    F[0] = 0;
    F[1] = 1;
    for(int i = 2; i < 100; i++){
        F[i] = -1;
    }
    fib_rec(n);
    cout << F[n];
}
int main()
{
   long long n = 89;
   cout << n<< "th Position fibonacci Number is " ;
   fib(n);
}
