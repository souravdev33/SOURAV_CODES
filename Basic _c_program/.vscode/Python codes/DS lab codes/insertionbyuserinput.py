def insertion_sort(arr):
    # Traverse through 1 to len(arr)
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1

        # Move elements of arr[0..i-1] that are greater than key to one position ahead of their current position
        while j >= 0 and key < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key

# Example usage:
if __name__ == "__main__":
    unsorted_list = [64, 34, 25, 12, 22, 11, 90]
    print("Unsorted list:", unsorted_list)
    insertion_sort(unsorted_list)
    print("Sorted list:", unsorted_list)
