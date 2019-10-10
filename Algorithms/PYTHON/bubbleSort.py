def bubbleSort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]


arr = [22, 33, 44, 11, 99, 66, 77, 88, 55]

bubbleSort(arr)

print("Sorted array is:", arr)
