/* 
 * Author : sr1k4n7h
 */  

#include<bits/stdc++.h>

#define S(n)            	int n ; scanf("%d",&n)
#define SA(n,i)           	scanf("%d",n+i)
#define REP(i,a,b)      	for(int i=a;i<b;++i)
#define PER(i,a,b)      	for(int i=a;i>=b;--i)
#define MAXI(a,b)       ( (a) > (b) ? (a) : (b))
#define CASES 			int __T; scanf("%d ", &__T); while (__T--)
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  

    CASES{
	S(N);
        int CS=0, NCS=0;
        int a[N+1], b[N+1], ne=0;
        REP(i,0,N){
            SA(a,i);
            if(a[i]>0){ ne=1; NCS+=a[i];}
            if(i==0) b[i]=a[i];
            else b[i]=MAXI(b[i-1]+a[i],a[i]);
        }
        CS = *max_element(b,b+N);
        cout<< CS <<" ";
        if(ne==0) NCS = *max_element(a,a+N);
        cout<<NCS <<endl;
    }
    return 0;
}

