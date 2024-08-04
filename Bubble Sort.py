grades = [85, 92, 78, 95, 88, 76, 99, 81, 90, 89]

print("Original Grades:")
print(grades)

def bubble_sort(grades):
    n = len(grades)
    for i in range(n-1):
        for j in range(0, n-i-1):
            if grades[j] > grades[j+1]:
                grades[j], grades[j+1] = grades[j+1], grades[j]
    return grades

sorted_grades = bubble_sort(grades)

print("Sorted Grades:")
print(sorted_grades)