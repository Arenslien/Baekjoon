# 1157: 단어 공부

# 1. 알파벳 카운팅 딕셔너리
alphabet_dict = {
  chr(i+97): 0 for i in range(26)
}

# 2. 입력 --> 소문자 변환
word = input().lower()

# 3. 알파벳 카운팅
for alphabet in word:
  alphabet_dict[alphabet] += 1

# 4. 반복
max = 0
cnt = 0
max_key = ""
for key in alphabet_dict.keys():
  if alphabet_dict[key] > max:
    max = alphabet_dict[key]
    max_key = key
    print(max)

if cnt == 1: print(max_key)
else: print("?")
