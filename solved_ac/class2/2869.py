# 2869: 달팽이는 올라가고 싶다

A, B, V = list(map(int, input().split()))

cnt = (V - A)//(A - B)
if ((V - A) % (A - B) == 0): cnt += 1
else: cnt += 2

print (cnt)

"""
2 1 5
4

5 1 6
2

100 99 1000000000
999999901
"""