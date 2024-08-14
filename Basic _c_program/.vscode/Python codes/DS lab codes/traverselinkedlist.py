class node:
    def __init__(self,data):
        self.data=data
        self.next=None
    
class Linked_list:
    def __init__(self):
        self.head=None
    
    def print_L(self):
        if self.head is None:
            print("The linklist is empty")
        else:
            n=self.head
            while n is not None:
                print(n.data)
                n=n.next


            
firstnode=node(0)
secondnode=node(0)
thirdnode=node(0)

L= Linked_list()

L.head=firstnode
firstnode.next=secondnode
secondnode.next=thirdnode


L.print_L()