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


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T,N;
    cin >> T;
    while(T--){
        string s ="";
        cin >> N;
        if (N<3) cout <<"-1\n";
        else{
            for (int i=N; i>=0; i--){
                if (i%3 == 0 && (N-i)%5 == 0){
                    for(int j=0;j<i;j++) s+="5";
                    for(int k=0;k<N-i;k++) s+="3";
                    break;
                }
            }
            if (s=="") cout <<"-1\n";
            else cout << s <<endl;
        }
            
    }
    return 0;
}
