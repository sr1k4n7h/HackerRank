/*
 * Author : Sr1k4n7h
 */

#include<bits/stdc++.h>

#define SL(n)           long long (n); scanf("%lld",&n)
#define SLA(n,i)        scanf("%lld",n+i)
#define REP(i,a,b)      for(int i=a;i<b;i++)
#define PER(i,a,b)      for(int i=a;i>=b;i--)
#define MAXI(a,b)       ( (a) > (b) ? (a) : (b))
#define CASES 		int _T; scanf("%d ", &_T); while (_T--)

typedef long long ll;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   CASES{
        ll M=0, P=0;
        SL(N);
        ll stock[N+1];
        REP(i,0,N) SLA(stock,i);
        PER(i,N-1,0) { M = MAXI(M, stock[i]); P+= M-stock[i]; }
        printf("%lld\n",P);
    }
    return 0;
}

