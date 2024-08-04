grades = [85, 92, 78, 95, 88, 76, 99, 81, 90, 89]

print("Original Grades:")
print(grades)

def selection_sort(grades):
    n = len(grades)
    for i in range(n-1):
        min_idx = i
        for j in range(i+1, n):
            if grades[j] < grades[min_idx]:
                min_idx = j
        grades[i], grades[min_idx] = grades[min_idx], grades[i]
    return grades

sorted_grades = selection_sort(grades)

print("Sorted Grades:")
print(sorted_grades)