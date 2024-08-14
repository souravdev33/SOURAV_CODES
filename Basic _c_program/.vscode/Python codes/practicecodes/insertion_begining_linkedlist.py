

class Node:
    def __init__(self,data):
        self.data=data
        self.head=None
    

class Linklist:
    def __init__(self):
        self.head=None
        
    
    def traversal(self):
        if self.head is None:
            print("LInkedlist is empty!!!")
        else:
            ptr=self.head
            while ptr is not None:
                print(ptr.data)
                ptr=ptr.next
                
                
    def add_begin(self,data):
        new_node=Node(data)
        new_node.next=self.head
        self.head=new_node
        
        
    def add_end(self,data):
        new_node=Node(data)
        ptr=self.head
        while ptr.next is not None:
            ptr=ptr.next
        ptr.next=new_node
        new_node.next=None
        
    def add_middle(self,data,value):
        new_node=Node(data)
        ptr=self.head
        while ptr is not None:
            if ptr.data==value:
                break
            ptr=ptr.next
        new_node.next=ptr.next
        ptr.next=new_node
        
    def delete_begin(self):
        self.head=self.head.next
        
        
    def delete_end(self):
        ptr=self.head
        while ptr.next.next is not None:
            ptr=ptr.next
        ptr.next=None
   
        
L=Linklist()

first=Node(10)
second=Node(20)
third=Node(30)

L.head=first
first.next=second
second.next=third
third.next=None
L.add_begin(40)
L.add_end(50)
L.add_middle(69,30)
L.delete_begin()
L.delete_end()


L.traversal()