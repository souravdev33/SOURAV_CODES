def deletion(arr, value):
    if value not in arr:
        print("Element not found in the array.")
        return
    if value in arr:
        arr.remove(value)
        print("Value has been deleted")

    print("Array after deletion:", arr)

arr = []


size = int(input("Enter the size of the array: "))

for i in range(size):
    element =input("Enter element {}: ".format(i+1))
    arr.append(element)

value = input("Enter the element to be deleted: ")
deletion(arr, value)
