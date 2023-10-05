# BeakJoon 13300

Number_of_people, Max_of_room = input().split(" ")
Number_of_people = int(Number_of_people)
Max_of_room = int(Max_of_room)
number_of_room = 0
students = [[0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0]] #students[gender][grade]

for i in range(Number_of_people):
    gender, grade = input().split(" ")
    students[int(gender)][int(grade) - 1] += 1    
    
for i in range(2):
    for j in range(6):
        if (students[i][j] != 0):
            number_of_room += students[i][j]//Max_of_room
            if ((students[i][j]%Max_of_room) != 0):
                number_of_room += 1

print(number_of_room)
