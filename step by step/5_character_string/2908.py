# 1. 두 수 A, B를 입력
A, B = input().split()
a, b = "", ""

# 2. 두 수를 거꾸로 뒤집기
for i in range(3):
  a += A[2-i]
  b += B[2-i]

# 3. 두 수 비교 후 결과 출력
if a > b: print(a)
else: print(b)
