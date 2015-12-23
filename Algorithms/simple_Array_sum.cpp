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
    int K;
    int sum = 0;
    cin >> T;
    for(int i=0;i<T;i++){
        cin >> K;
        sum +=K;
    }
    
    cout << sum ;
    
    return 0;
}
