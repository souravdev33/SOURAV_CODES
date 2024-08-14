class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class Linkedlist:
    def __init__(self):
        self.head = None

    def traverse(self):
        temp = self.head
        while temp:
            print(temp.data)
            temp = temp.next
    

    def insertbeginning(self, data):
        new_node = Node(data)
        new_node.next = self.head
        self.head = new_node

    def insertmiddle(self, data, pos):
       new_node = Node(data)
       temp = self.head
       flag  = 1
       while temp and flag != pos:
         temp = temp.next
         flag += 1
        
       if not temp:
            print("Position out of range.")
       else:
            new_node.next = temp.next
            temp.next = new_node


    def insertend(self, data):
        new_node = Node(data)
        if not self.head:
            self.head = new_node
            return
        temp = self.head
        while temp.next:
            temp = temp.next
        temp.next = new_node

    def deletebeginning(self):
        if not self.head:
            print("Linked list is empty. Nothing to delete.")
            return
        self.head = self.head.next

    def deletemiddle(self, pos):
      if not self.head:
         print("Linked list is empty.Nothing to delete")
         return
      prev = self.head
      flag = 1
      while prev.next and flag != pos:
            prev = prev.next
            flag += 1
      if not prev.next:
            print("Position out of range.")
      else:
            prev.next = prev.next.next


    def deleteend(self):
        if not self.head:
            print("Linked list is empty. Nothing to delete.")
            return
        if not self.head.next:
            self.head = None
            return
        temp = self.head
        while temp.next.next:
            temp = temp.next
        temp.next = None

    def searchvalue(self, value):
        temp = self.head
        pos = 1
        while temp:
            if temp.data == value:
                print(f"Value {value} found at position {pos}.")
                return
            temp = temp.next
            pos += 1
        print(f"Value {value} not found in the linked list.")

    def updatebycount(self, count, new_value):
        temp = self.head
        flag = 1
        while temp and flag != count:
            temp = temp.next
            flag += 1
        if not temp:
            print("Position out of range.")
        else:
            temp.data = new_value


    def updatebyvalue(self, old_value, new_value):
        temp = self.head
        while temp:
            if temp.data == old_value:
                temp.data = new_value
                return
            temp = temp.next
        print(f"Value {old_value} not found in the linked list.")


# Creating the linked list
L = Linkedlist()

# Getting user input for insertions
print("Insertion part:")
n = int(input("Number of elements to insert at the end: "))
for _ in range(n):
    data = int(input("Value to be inserted: "))
    L.insertend(data)

data = int(input("Value to insert at the beginning: "))
L.insertbeginning(data)

pos = int(input("Enter position to insert in the middle: "))
data = int(input("Value to be inserted: "))
L.insertmiddle(data, pos)

# Traversing the linked list after insertions
print("\nLinked list after insertions:")
L.traverse()

# Getting user input for deletions
print("\nDeletion part:")
delete= input("Enter '1' to delete from beginning: ")
if delete.lower() == '1':
    L.deletebeginning()

pos = int(input("Enter the position to delete: "))
L.deletemiddle(pos)

delete= input("Enter '1' to delete from the end: ")
if delete.lower() == '1':
    L.deleteend()

# Traversing the linked list after deletions
print("\nLinked list after deletions:")
L.traverse()

# Getting user input for searching and updating
print("\nSearching and Updating part:")

value = int(input("Enter the value to search: "))
L.searchvalue(value)
count = int(input("count of the node to update value: "))
new_value = int(input("Enter the new value: "))
L.updatebycount(count, new_value)

old_value = int(input("Enter old value to update: "))
new_value = int(input("Enter new value: "))
L.updatebyvalue(old_value, new_value)

# Traversing the final linked list after all operations
print("\nLinked list:")
L.traverse()