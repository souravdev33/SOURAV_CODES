class Node:
    def __init__(self,data):
        self.data = data 
        self.next = None
        
        
class Stack :
    def __init__(self):
        self.top = None
        
        
    def Push(self):
        x = int(input("Enter the elements to be insert into stack : "))
        new = Node(x)
        if self.top is None:
            self.top = new
            self.top.next = None
            
        else:
            new.next = self.top
            self.top = new
        
    def display(self):
        if self.top is None :
            print("Stack is empty")
            
        else:
            print("Elements of stack are : ")
            temp = self.top
            while temp:
                print(temp.data)
                temp = temp.next
            print("Top of the stack is : ",self.top.data) 
            
    def Pop(self):
         if self.top is None:
             print("Stack is empty")
             
         elif self.top.next is None:
             print("Popped elements is : ",self.top.data)
             print("---------------------------")
             self.top = None
             
         else:
             print("Popped elements is : ",self.top.data)
             print("---------------------------")
             temp = self.top
             self.top = temp.next
             temp = None
             
         
         
         
         
         
         
                
s = Stack()
s.Push()
s.Push()
s.Push()
s.Push()
s.Pop()
s.display()