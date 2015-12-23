/*
 * Author : Sr1k4n7h
 */

#include<bits/stdc++.h>

#define SL(n)            	long long n ; scanf("%lld",&n)
#define SLA(n,i)           	scanf("%lld",n+i)
#define REP(i,a,b)      	for(int i=a;i<b;i++)
#define REPE(i,a,b)      	for(int i=a;i<=b;i++)
#define MEMSET(A,I)		    memset((A), I, sizeof(A))

using namespace std;
typedef long long ll;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    SL(T); SL(N);
    ll a[N+1], b[T+1];
    MEMSET(a,0); MEMSET(b,0);
    REP(i,0,N) SLA(a,i);
    b[0]=1;
    REP(i,0,N) REPE(j,a[i],T) b[j] += b[j-a[i]];
    printf("%lld\n",b[T]);
    return 0;
}
