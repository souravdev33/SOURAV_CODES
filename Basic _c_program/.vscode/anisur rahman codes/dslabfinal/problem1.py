class Node:
    def __init__(self,data):
        self.data=data
        self.head=None
        
class Linklist:
    def __init__(self):
        self.head=None
        
    
    def traverse(self):
        if self.head is None:
            print("Linkedlist is Empty!!!")
        ptr=self.head
        while ptr is not None:
            print(ptr.data)
            ptr=ptr.next 
            
    def add_end(self,data):
        new_node=Node(data)
        ptr=self.head
        while ptr.next is not None:
            ptr=ptr.next
        ptr.next=new_node
        new_node.next=None
                        
            
L=Linklist()

first=Node(10)
second=Node(20)
third=Node(30)
L.head=first
first.next=second
second.next=third
third.next=None
L.add_end(40)
L.traverse()