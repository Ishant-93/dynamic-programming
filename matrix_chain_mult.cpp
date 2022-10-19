#include<bits/stdc++.h>
using namespace std;

int min(int *arr, int i, int j){  
    static map<pair<int, int>, int> m1;         // memoization.
    int minimum = INT_MAX;                      // here we have to take i as argument bcz we have to make recursive calls.
    int new_val;
    if(i == j) return 0;                        // base case.
    if(m1.find(pair(i, j)) != m1.end())
        return m1.at(pair(i, j));

    for(int k = i; k < j; k++){
        // for Ai --> arr[i-1]*arr[i] will be the order.
        new_val = arr[i-1]*arr[k]*arr[j] + min(arr, i, k) + min(arr, k+1, j);
        if(new_val < minimum)
            minimum = new_val;
    } 
    m1[pair(i,j)] = minimum;
    return m1.at(pair(i, j));                    // I didnt return inside for loop bcz i want to explore every possibility.
        
}

int main(){
    int arr[] = {40,20,30,10,30};
    int m;
    m = min(arr, 1, 4);
    cout << m << endl;

}

// successfully executed Dynamically.