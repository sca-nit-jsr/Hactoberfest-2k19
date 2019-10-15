def insertionSort(arr):
    '''Implementation of insertion sort'''
    for i in range(1, len(arr)):
        key = arr[i]

        j = i-1
        while j >= 0 and key < arr[j]:
            arr[j+1] = arr[j]
            j -= 1
        arr[j+1] = key


arr = [22, 33, 44, 11, 99, 66, 77, 88, 55]

insertionSort(arr)

print("Sorted array is:", arr)
