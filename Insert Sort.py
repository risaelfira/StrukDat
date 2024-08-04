grades = [85, 92, 78, 95, 88, 76, 99, 81, 90, 89]

print("Original Grades:")
print(grades)

def insertion_sort(grades):
    n = len(grades)
    for i in range(1, n):
        key = grades[i]
        j = i-1
        while j >= 0 and key < grades[j]:
            grades[j+1] = grades[j]
            j -= 1
        grades[j+1] = key
    return grades

sorted_grades = insertion_sort(grades)

print("Sorted Grades:")
print(sorted_grades)