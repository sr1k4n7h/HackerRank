/*
 * Author : Sr1k4n7h
 */

#include<bits/stdc++.h>

#define S(n)            	int n ; scanf("%d",&n)
#define SA(n,i)           	scanf("%d",n+i)
#define REP(i,a,b)      	for(int i=a;i<b;++i)
#define PER(i,a,b)      	for(int i=a;i>=b;--i)
#define MINI(a,b)       	( (a) < (b) ? (a) : (b))
#define CASES 			int _T; scanf("%d ", &_T); while (_T--)

typedef long long ll;

int main() {
    int bricks[100007];
    ll dp[100007];
    CASES{
        S(N);
        ll sum=0;
        REP(i,0,N) SA(bricks,i);
        dp[N] = dp[N+1] = dp[N+2] = 0;
        PER(i,N-1,0){ sum+=bricks[i]; dp[i] = sum - MINI(dp[i+1], MINI(dp[i+2], dp[i+3])) ;}
        printf("%lld\n",dp[0]); 
    }
    return 0;
}
