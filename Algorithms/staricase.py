 __author__ = 'srikanth'
N = int(input())
N += 1
for i in range(N, 1, -1):
    print(str((i-2) * " ") + str((N + 1 - i) * "#"))
