/* 
 * Author: sr1k4n7h
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N,T,i,j,C;
    int A[1000001];
    cin >> N >> T;
    for(int k=0; k<N; k++) cin >> A[k];
    while(T--){
        cin >> i >> j;
        C = 4;
        for(int l=i; l<=j; l++) C = min(C,A[l]);
        cout << C << endl;
    }
    return 0;
}

