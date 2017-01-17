/*
* Author : Sr1k4n7h
*/

#include<bits/stdc++.h>

#define SS(n)       int n ; scanf("%d",&n)
#define SD(d)       int d ; scanf("%d",&d)
#define SA(n,i)     scanf("%d",n+i)
#define REP(i,a,b)  for(int i=a;i<b;i++)
#define MEMSET(A,I) memset((A), I, sizeof(A))
#define CASES       int _T; scanf("%d", &_T); while (_T--)


int main() {
    int a[10007], b[1000007] ;
    int c=0;
//    CASES{
        SS(n); SD(d);
        MEMSET(a,0); MEMSET(b,0);
        REP(i,0,n) SA(a,i);
        REP(i,0,n) b[a[i]]=1;
        REP(i,0,n) {if ((b[a[i]+d]) && (b[a[i]+d+d])) c++;}
        printf("%d\n",c);
//    }
    return 0;
}
