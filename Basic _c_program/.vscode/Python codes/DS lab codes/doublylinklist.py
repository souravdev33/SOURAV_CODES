class node:
    def __init__(self,data):
        self.prev=None
        self.data=data 
        self.next=None
        
class Clinkedlist:
    def _init_(self):
        self.head=None
        
    def traverse(self,head):
        print(head.data)
        temp=head.next
        while temp!=head:
            print(temp.data)
            temp=temp.next
    
first=node(10)
second=node(20)
third=node(30)

L=Clinkedlist()
L.head=first
first.next=second
second.next=third
second.prev=first
third.next=L.head
third.prev=second
L.traverse(L.head)