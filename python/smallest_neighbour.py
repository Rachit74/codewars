# /*
# Write a program that returns the elements
# in a vector that are strictly smaller than their adjacent left and right neighbours.

# ({7, 2 ,5, 3, 1, 5, 6}) -> 2, 1
# ({1, 2 ,5, 0, 3, 1, 7}) -> 0, 1
# */
smallest_array=[]

def smallestNeighbour(arr):
    n=len(arr)

    if (arr[0]<arr[1]):
        smallest_array.append(arr[0])
    
    for i in range(1,n-1):
        if (arr[i]<arr[i-1] and arr[i]<arr[i+1]):
            smallest_array.append(arr[i])
    
    if (arr[n-1]<arr[n-2]):
        smallest_array.append(arr[n-1])

    return smallest_array


given_array = [7, 2 ,5, 3, 1, 5, 6]
print(smallestNeighbour(given_array))