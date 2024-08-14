def insert_element(array, element, position):

    array.insert(position, element)


size = int(input("Enter the size of the array: "))

my_array = []

for i in range(size):
    element = input("Enter element {}: ".format(i + 1))
    my_array.append(element)


new_element = input("Enter the element to insert: ")

position = int(input("Enter the position to insert the element: "))


insert_element(my_array, new_element, position)

print("Updated array:", my_array)
