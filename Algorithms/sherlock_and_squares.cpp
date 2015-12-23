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
    long long T,A,B;
    cin >> T;
    while(T--){
        cin >> A >> B;
        cout << floor(sqrt(B)) - ceil(sqrt(A)) + 1 << endl;
    }
    return 0;
}

