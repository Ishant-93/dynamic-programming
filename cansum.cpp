#include<bits/stdc++.h>
using namespace std;

bool cansum(int n, int size, int *arr){
    static map<int, bool> m1;
    if(m1.find(n) != m1.end()) return m1.at(n);

    int remainder;
    if(n == 0) return true;
    if(n < 0) return false;
    for(int i = 0; i < size; i++){
        remainder = n - arr[i];
        m1[n] = cansum(remainder, size, arr);
        if(m1.at(n) == true)
            return true;
    }
    return false;
}

int main(){
    int arr[] = {7, 14};
    if(cansum(300, 2, arr))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}