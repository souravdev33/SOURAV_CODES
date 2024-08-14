class node:
    def __init__(self,data):
        self.data=data
        self.head=None

class Linkedlist:
    def __init__(self):
        self.head=None

    def traversal(self):
        if self.head is None:
            print("Linked list is empty!!")
        else:
            ptr=self.head
            while ptr is not None:
                print(ptr.data)
                ptr=ptr.next
        
    def insert_begin(self,data):
        new_node=node(data)
        ptr=self.head
        new_node.next=self.head
        self.head=new_node
    
    def insert_end(self,data):
        new_node=node(data)
        ptr=self.head
        while ptr.next is not None:
            ptr=ptr.next
        ptr.next=new_node
        new_node.next=None
    
    def insert_middle(self,data,value):
        new_node=node(data)
        ptr=self.head
        while ptr is not None:
            if value==ptr.data:
                break
            ptr=ptr.next
        new_node.next=ptr.next
        ptr.next=new_node
    
    def delete_begin(self):
        ptr=self.head
        self.head=self.head.next
        
    def delete_ending(self):
        ptr=self.head
        while ptr.next.next is not None:
            ptr=ptr.next
        ptr.next=None
            
            
L=Linkedlist()
  
first=node(10)
second=node(20)
third=node(30)

L.head=first
first.next=second
second.next=third
third.next=None
L.insert_begin(40)
L.insert_end(50)
L.insert_middle(69,20)
L.delete_begin()
L.delete_ending()

L.traversal()