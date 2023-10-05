"""
직사각형의 둘레를 출력
둘레 -> 2(가로 + 세로)
가로 세로 구해야 함

    가로    세로
1.  1       1
2.  1       2
3.  3       2
4.  3       5
5.  8       5
6.  8       13
7.  21      13
8.  21      34
.
.
.
->일단 처음 가로 세로의 값을 1로 초기화
그다음 가로의 길이는 그대로, 그다음 세로의 길이는 가로 + 세로
그다음 가로의 길이는 전 가로 길이 + 전 세로길이, 세로 그대로
그다음 가로 길이 그대로 세로길이 : 전 가로길이 + 세로길이
번갈아가면서 반복
"""
length = 1
breadth = 1
N = int(input())
for i in range(N-1):
    if ((not i%2)):
        breadth = breadth + length
    else :
        length = breadth + length

print(2*(length + breadth))
    
