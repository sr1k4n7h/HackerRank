__author__="sr1k4n7h"

A,B,N = map(int,input().split())  
L = [0, A, B]
for i in range(3,N+1):  
    L.append(L[-1]**2 + L[-2])
print(L[N])
