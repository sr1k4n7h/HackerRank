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
    int T, N, C, M, cnt, W, F;
    cin >> T;
    while(T--){
        cin >> N >> C >> M;
        cnt = N/C ;
        W = cnt;
        while(W>=M){
            F = W/M;
            cnt += F;
            W = F + W%M;
        }
        cout << cnt << endl;
    }
    return 0;
}
