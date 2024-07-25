# Write a  program to check whether numbers in a vector can be rearranged so that each number appears exactly once in a consecutive list of numbers. Return true otherwise false.

# {1,3,2} -> true
# {1,4,2} -> false


arr = [1,3,2,5,4]

def sort(arr):
    temp=0
    for i in range(len(arr)-1):
        for j in range(len(arr)-i-1):
            if (arr[j]>arr[j+1]):
                temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp

def checkConsecutive(arr):
    sort(arr)
    for i in range(len(arr)-1):
        if (arr[i] + 1 != arr[i+1]):
            return False
    return True

print(checkConsecutive(arr))