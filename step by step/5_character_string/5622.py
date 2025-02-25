# 5622: 다이얼

# 1. 다이얼 세팅
dial_list = ["ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"]

# 2. 알파벳 대문자 문자열 입력
word = input()

# 3. 최소 시간 계산
time = 0

for i in range(len(word)):
  for j in range(len(dial_list)):
    if word[i] in dial_list[j]:
      time += j + 3
      continue

# 4. 결과 출력
print(time)