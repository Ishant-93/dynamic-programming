#include<bits/stdc++.h>
using namespace std;

long long int fib(int n){
    static map<int, long long int> memo;
    if(memo.find(n) != memo.end())
        return memo.at(n);
    if(n <= 2)
        return 1;
    memo[n] = fib(n - 1) + fib(n - 2);          // is just not want to return but also to save the value inside map.
    return memo.at(n);
}

int main(){
    cout << fib(6) << endl;
    cout << fib(7) << endl;
    cout << fib(8) << endl;
    cout << fib(50) << endl;
}