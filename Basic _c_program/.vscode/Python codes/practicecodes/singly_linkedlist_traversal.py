class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None
    
    def traversal(self):
        if self.head is None:
            print("The linked list is empty!!!")
        else:
            ptr = self.head
            while ptr is not None:
                print(ptr.data)
                ptr = ptr.next
                
    def add_begin(self, data):
        new_node = Node(data)
        new_node.next = self.head
        self.head = new_node
        
    def add_end(self, data):
        new_node = Node(data)
        ptr = self.head
        while ptr.next is not None:
            ptr = ptr.next
        ptr.next = new_node
        
    def add_middle(self, data, value):
        new_node = Node(data)
        ptr = self.head
        while ptr is not None:
            if ptr.data == value:
                break
            ptr = ptr.next
        if ptr is None:
            print("Value not found in the linked list.")
            return
        new_node.next = ptr.next
        ptr.next = new_node
        
    def delete_begin(self):
        if self.head is not None:
            self.head = self.head.next
    
    def delete_end(self):
        if self.head is None:
            return
        if self.head.next is None:
            self.head = None
            return
        
        ptr = self.head
        while ptr.next.next is not None:
            ptr = ptr.next
        ptr.next = None
        
    def delete_middle(self, value):
        if self.head is None:
            return
        
        if self.head.data == value:
            self.head = self.head.next
            return
        
        ptr = self.head
        while ptr.next is not None:
            if ptr.next.data == value:
                ptr.next = ptr.next.next
                return
            ptr = ptr.next
                
L = LinkedList()

first = Node(10)
second = Node(20)
third = Node(30)

L.head = first
first.next = second
second.next = third
third.next = None

L.add_begin(40)
L.add_end(60)
L.add_middle(69,20)
L.delete_begin()
L.delete_end()
L.delete_middle(69)
L.traversal()
