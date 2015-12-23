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
    int T;
    cin >> T;
    int N, K, M, S=0;
    while(T--){
        cin >> N >> K;
        while(N--) {
            cin >> M;
            if (M<=0) S++;
        }
        if(S<K) cout << "YES\n";
        else cout <<"NO\n";
        S=0;
    }
    return 0;
}
