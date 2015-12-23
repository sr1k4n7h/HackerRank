__author__ = 'srikanth'
N, sum1, sum2, A = int(raw_input()), 0, 0, []
for _ in range(N):
    A.append(map(int, raw_input().split()))
for i in range(N):
    sum1 += A[i][i]
    sum2 += A[i][(N - 1) - i]
print(abs(sum2 - sum1))
