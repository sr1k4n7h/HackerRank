/** author : sr1k4n7h **/

#include<bits/stdc++.h>

#include <queue>
#include <vector>
#include <utility>
#include <algorithm>

#define S(n)            	int n ; scanf("%d",&n)
#define SC(n)            	scanf("%d",&n)
#define REP(i,a,b)      	for(int i=a;i<b;i++)
#define PB              	push_back
#define MP              	make_pair
#define Fi                  first
#define Se                  second    
#define SZ(a)               ((int)(a.size()))
#define FR                  front()
#define POP                 pop()
#define PU(i)               push(i)
#define EM                  empty()

using namespace std;

typedef pair<int, int> 		   PII;
typedef vector<PII> 		   VII;
typedef queue<int>             Qu;
typedef vector <vector <int> > VVI;
typedef vector<bool>           VB;

int countEdges(VVI A,int u) {
    Qu Q;
    int N=0,cnt=0 ;
    N = SZ(A);
    VB V(N,0);
    Q.PU(u);
    V[u]=1;
    while(!Q.EM) {
        int te = Q.FR; Q.POP;
        REP(i,0,N) if(A[te][i]==1) if(V[i]==0) { V[i]=1; Q.PU(i);}
    } 
    REP(i,0,N) if(V[i]==1) cnt++;
    return cnt;
}


int main() {

    S(N); S(M);
    int c=0,u,v;
    VVI A(N,vector <int>(N,0));
    VII E;
    REP(i,0,M) {
        SC(u); SC(v);
        A[u-1][v-1]=1; A[v-1][u-1]=1;
        E.PB(MP(u-1,v-1));
    }
    REP(i,0,M){
        u=E[i].Fi; v=E[i].Se;
        A[u][v]=0; A[v][u]=0;
        if (countEdges(A,u)%2==0) c++; else {A[u][v]=1;A[v][u]=1;}
    }
    printf("%d\n",c);
    return 0;
}
