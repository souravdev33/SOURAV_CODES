def linear_search(arr, item):
    if item not in arr:
        print("Element not found")
        return
    if item in arr:
        print("The position of the item is",i)


arr=[]
size=int(input("Enter the size of the array : "))

for i in range (size):
    element=input("Enter element {} :".format(i+1))
    arr.append(element)
item=int(input("Enter the item : "))

linear_search(arr,item)
