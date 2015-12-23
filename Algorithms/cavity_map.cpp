/* 
 * Author: sr1k4n7h
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool okay(int x, int y, int n){
    return x >= 0 && x < n && y >= 0 && y < n;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    string M[106];
    int dx[4] = { -1, 1, 0, 0 };
    int dy[4] = { 0, 0, -1, 1 };
    int N;
    cin >> N;
    for(int i=0; i<N; i++) cin >> M[i];
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            int V = M[i][j] - '0';
			int C = 0;
			for (int k = 0; k < 4; k++){
				int ti = i + dx[k];
				int tj = j + dy[k];
				if (okay(ti, tj, N) && V > M[ti][tj] - '0') C++;
			}
			if (C == 4) cout << 'X';
			else cout << M[i][j];
			if (j == N-1) cout << endl;          
        }
    } 
    return 0;
}

