# Akses Elemen
arr = [1, 2, 3, 4, 5, 6 ]
print(arr[2])  

# Pembaruan Elemen
arr[5] = 17
print(arr)  

# Insertion
arr.insert(1, 50)
print(arr) 

# Deletion
del arr[4]
print(arr)  

# Pencarian Elemen
print(20 in arr)  

# Traversal
for i in arr:
    print(i)

#Sorting
arr.sort()
print(arr)  

# Merging
arr2 = [9, 10, 11]
arr.extend(arr2)
print(arr)  