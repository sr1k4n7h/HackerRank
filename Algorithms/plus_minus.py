from __future__ import division
N = int(raw_input())
A = map(int, raw_input().split())
print("%.3f" % (len(filter(lambda x: x > 0, A)) / N))
print("%.3f" % (len(filter(lambda x: x < 0, A)) / N))
print("%.3f" % (A.count(0) / N))
