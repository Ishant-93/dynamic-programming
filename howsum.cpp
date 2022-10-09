#include<bits/stdc++.h>
using namespace std;

static vector<int> v1;
bool howsum(int n, int size, int *arr){
    static map<int, bool> m1;
    int rem;
    if(m1.find(n) != m1.end()) return m1.at(n);
    if(n == 0) return true;
    if(n < 0) return false;
    for(int i = 0; i < size; i++){
        rem = n - arr[i];
        m1[n] = howsum(rem, size, arr);
        if(m1.at(n) == true){
            v1.push_back(arr[i]);
            return true;
        }
    }
    return false;
}

int main(){
    int arr[] = {2,14};
    if(howsum(50, 2, arr) == false) 
        cout << "Not Possible :( " << endl;
    else
        for(auto i : v1)
           cout << i << endl;
    
}

// used global vector here.
// lets see what will happen next.
/* here map used for the false cases because once you encounter true case program will return until false cases follows ,function will run.
   therefore vector will pe pushed only in one case i.e in true case. */ 