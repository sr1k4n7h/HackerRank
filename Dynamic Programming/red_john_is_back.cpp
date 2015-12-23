/*
 * Author : Sr1k4n7h
 */


#include<bits/stdc++.h>

#define S(n)            	   int (n); scanf("%d",&n)
#define SL(n)           	   scanf("%lld",&n)
#define REP(i,a,b)      	   for(int i=a;i<b;i++)
#define REPL(i,a,b)      	   for(long long i=a;i<b;i++)
#define REPLP(i,a,b)           	   for(long long i=a*a;i<=b;i+=a) 
#define CASES 			   int _T; scanf("%d ", &_T); while (_T--)

using namespace std;

typedef long long ll;

int primes[1000001], k=0;
bool is_p[1000001];
ll bricks[41];

inline void prime_gen(){ REPL(i,2,1000001) if(!is_p[i]){ primes[k++] = i; REPLP(j,i,1000001) is_p[j] = true;} }
inline void calc_bricks(){
    REP(i,0,4) bricks[i]=1; bricks[4]=2;
    REP(i,5,41) bricks[i] = bricks[i-1] + bricks[i-4];
}

int main(){
    fill(primes, primes+1000001, 0);
    fill(is_p, is_p+1000001, false);
    fill(bricks, bricks+41, 0);
    prime_gen();
    calc_bricks();
    CASES{
        ll C=0;
        S(N);
        REP(i,0,1000001){
            if(primes[i]<=bricks[N]) C++;
            else break;
        }
        printf("%d\n",C);
    }
	return 0;
}
