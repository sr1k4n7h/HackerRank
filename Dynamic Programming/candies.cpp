/*
 * Author : sr1k4n7h
 */


#include<bits/stdc++.h>

#define S(n)            	int n ; scanf("%d",&n)
#define SA(n,i)           	scanf("%d",n+i)
#define REP(i,a,b)      	for(int i=a;i<b;++i)
#define PER(i,a,b)      	for(int i=a;i>=b;--i)

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    S(N);
    int rating[N], r[N], l[N], min_candies=0;
    REP(i,0,N) SA(rating,i);
    fill(r,r+N,1); fill(l,l+N,1);
    PER(i,N-2,0) if(rating[i+1] < rating[i]) r[i] = r[i+1] +1;
    REP(i,1,N) if(rating[i-1] < rating[i]) l[i] = l[i-1] +1;
    REP(i,0,N) min_candies += max(r[i],l[i]);
    printf("%d\n",min_candies);
    return 0;
}
