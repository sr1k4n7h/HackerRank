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
    vector<int> V;
    int T,N,K,M;
    cin >> N;
    T=N;
    while(T--){
        cin >> K;
        V.push_back(K);
    }
    while(!V.empty()){
        M = *std::min_element(V.begin(), V.end());
        for(int j=0; j<=V.size(); j++) V[j] = V[j]-M;
        cout<< V.size() << endl;
        V.erase(std::remove(V.begin(), V.end(), 0), V.end());
    }
    
    return 0;
}
