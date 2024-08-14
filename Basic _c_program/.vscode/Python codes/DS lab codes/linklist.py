class node:
    def __init__(self,data):
        self.data=data 
        self.next=None
        
class linkedlist:
    def __init(self):
        self.head=None
        
    def traverse(self,head):
        while head!=None:
            print(head.data)
            head=head.next
    def delete_by_pos(self,head,pos):
        prev=head
        c=1
        while prev.next!=None:
            if c==pos-1:
                break
            else:
                prev=prev.next
                c+=1
        cur=prev.next
        prev.next=cur.next
        
        
            
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

c=1
t1=L.head
while c!=4:
    t1=t1.next
    c=c+1
t1.data=80

L.head=first

t2=L.head
while t2.next.next!=None:
    t2=t2.next

t2.next=None
prev =L.head
flag=0
while prev.next.next!=None:
    if prev.next.data==80:
        flag=1
        break
    else:
        prev=prev.next
cur=prev.next
if flag==1:
   prev.next=cur.next
   #cur.data=100
else:
    print("Deletion not possible")
    
L.delete_by_pos(L.head,2)
temp=L.head
L.traverse(temp)