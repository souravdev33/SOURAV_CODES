class Node:
    def init(self, data):
        self.data = data
        self.next = None

class SinglyLinkedList:
    def init(self):
        self.head = None

    def traverse(self):
        temp = self.head
        while temp:
            print(temp.data)
            temp = temp.next

    def insert_beginning(self, data):
        new_node = Node(data)
        new_node.next = self.head
        self.head = new_node

    def insert_middle(self, data, pos):
        new_node = Node(data)
        temp = self.head
        c = 1
        while temp and c != pos:
            temp = temp.next
            c += 1
        if not temp:
            print("Position out of range.")
        else:
            new_node.next = temp.next
            temp.next = new_node

    def insert_end(self, data):
        new_node = Node(data)
        if not self.head:
            self.head = new_node
            return
        temp = self.head
        while temp.next:
            temp = temp.next
        temp.next = new_node

    def delete_beginning(self):
        if not self.head:
            print("Linked list is empty.")
            return
        self.head = self.head.next

    def delete_middle(self, pos):
        if not self.head:
            print("Linked list is empty.")
            return
        prev = self.head
        c = 1
        while prev.next and c != pos:
            prev = prev.next
            c += 1
        if not prev.next:
            print("Position out of range.")
        else:
            prev.next = prev.next.next

    def delete_end(self):
        if not self.head:
            print("Linked list is empty.")
            return
        if not self.head.next:
            self.head = None
            return
        temp = self.head
        while temp.next.next:
            temp = temp.next
        temp.next = None

    def search_value(self, value):
        temp = self.head
        pos = 1
        while temp:
            if temp.data == value:
                print(f"Value {value} found at position {pos}.")
                return
            temp = temp.next
            pos += 1
        print(f"Value {value} not found in the linked list.")

    def update_by_count(self, count, new_value):
        temp = self.head
        c = 1
        while temp and c != count:
            temp = temp.next
            c += 1
        if not temp:
            print("Position out of range.")
        else:
            temp.data = new_value

    def update_by_value(self, old_value, new_value):
        temp = self.head
        while temp:
            if temp.data == old_value:
                temp.data = new_value
                return
            temp = temp.next
        print(f"Value {old_value} not found in the linked list.")


# Creating the linked list
L = SinglyLinkedList()

# Getting user input for insertions
print("Insertion Operations:")
n = int(input("Enter the number of elements to insert at the end: "))
for _ in range(n):
    data = int(input("Enter the value to insert at the end: "))
    L.insert_end(data)

data = int(input("Enter the value to insert at the beginning: "))
L.insert_beginning(data)

pos = int(input("Enter the position to insert in the middle: "))
data = int(input("Enter the value to insert in the middle: "))
L.insert_middle(data, pos)

# Traversing the linked list after insertions
print("\nLinked list after insertions:")
L.traverse()

# Getting user input for deletions
print("\nDeletion Operations:")
delete_from_beginning = input("Enter 'yes' to delete from the beginning: ")
if delete_from_beginning.lower() == 'yes':
    L.delete_beginning()

pos = int(input("Enter the position to delete from the middle: "))
L.delete_middle(pos)

delete_from_end = input("Enter 'yes' to delete from the end: ")
if delete_from_end.lower() == 'yes':
    L.delete_end()

# Traversing the linked list after deletions
print("\nLinked list after deletions:")
L.traverse()

# Getting user input for searching and updating
print("\nSearching and Updating Operations:")
value = int(input("Enter the value to search for: "))
L.search_value(value)
count = int(input("Enter the count of the node to update its value: "))
new_value = int(input("Enter the new value: "))
L.update_by_count(count, new_value)

old_value = int(input("Enter the old value to update: "))
new_value = int(input("Enter the new value: "))
L.update_by_value(old_value, new_value)

# Traversing the final linked list after all operations
print("\nFinal Linked list:")
L.traverse()