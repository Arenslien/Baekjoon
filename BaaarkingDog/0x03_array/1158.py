# 1158: 요세푸스 문제

N, K = list(map(int, input().split()))
cnt = 1

q = [i+1 for i in range(N)]

print('<', end="")

while (len(q) != 1):
  front = q[0]
  del q[0]

  if (cnt % K != 0): q.append(front)
  else: print(f"{front}, ", end="")

  cnt += 1

print(f"{q.pop()}>")
