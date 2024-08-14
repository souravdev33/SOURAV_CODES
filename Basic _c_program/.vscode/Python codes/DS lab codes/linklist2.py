from typing import Self


class node:
    def __init__(self,data):
        self.data=data 
        self.next=None
        
class linkedlist:
    def __init(self):
     Self.head=None
        
    def traverse(self,head):
        while head!=None:
            print(head.data)
            head=head.next
    
        
        
first=node(10)
second=node(20)
third=node(30)
newnode=node(40)
endnode=node(50)
midnode=node(100)


L=linkedlist()
L.head=first
first.next=second
second.next=third

newnode.next=L.head
L.head=newnode

third.next=endnode

t=L.head
while t!=None:
    if t.data==20:
        break
    else:
        t=t.next
        
midnode.next=t.next
t.next=midnode




head=L.head
L.traverse(head)