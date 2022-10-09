#include<bits/stdc++.h>
using namespace std;

long int grid(int n, int m){
    static map<pair<int, int>, long int> memo; // we only need the output data type.
    if(m == 0 || n == 0)
        return 0;
    if(m == 1 && n == 1)
        return 1;
    if(memo.find(pair(n, m)) != memo.end())
        return memo.at(pair(n, m));

    memo[pair(n, m)] = grid(n - 1, m) + grid(n, m - 1);
    return memo.at(pair(n, m));
}

int main(){
    cout << grid(18, 18) << endl;
}