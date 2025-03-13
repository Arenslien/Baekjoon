
# import datetime

# now = datetime.datetime.now()
# print(f"{now.strftime('%Y-%m-%d')}")


# N, M = list(map(int, input().split()))

# print(N, M)
# print(N - M if N-M > 0 else M-N)

# N = int(input())

# num = 1
# for i in range(N):
#   num *= i+1

# print(num)

# degree_dict = {
#   "A+": 4.3, "A0": 4.0, "A-": 3.7,
#   "B+": 3.3, "B0": 3.0, "B-": 2.7,
#   "C+": 2.3, "C0": 2.0, "C-": 1.7,
#   "D+": 1.3, "D0": 1.0, "D-": 0.7,
#   "F": 0.0
# }

# print(degree_dict[input()])

# sentence = input()
# result = ""

# for i in range(len(sentence)):
#   result += sentence[i].lower() if sentence[i].isupper() else sentence[i].upper()

# print(result)


# A, B = list(map(int, input().split()))

# print((A+B) * (A-B))