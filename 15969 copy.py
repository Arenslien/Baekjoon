
#list1 = list() 비어있는 리스트 설정
#for i in range(N):
#    list1.append(int(input()))
Min = 1000
Max = 0

N = int(input())
list1 = list(map(int, input().split()))
for i in range(N):
    if (Max <= list1[i]):
        Max = list1[i]
    if (Min >= list1[i]):
        Min = list1[i]
    
print(Max - Min)
