def create():
    item =[]  #stack
    return item
def push(item,val):
    item.append(val)
    print("After push operation : ",item)
    
def pop_s(item):
    N=len(item)
    if N==0:
        print("Stack is empty! ")
    else:
        return item.pop()
        #print("After pop operation : ",item)
        
def evalute(item,inp):
    for i in inp:
        if i not in '+-*/':
            push(item,int(i))
        else:
            first=pop_s(item)
            second=pop_s(item)
            
            if  i == '+':
                t= first + second
                push(item,t)
            elif i =='-':
                t=first - second
                push(item,t)
            elif i =='*':
                t=first*second
                push(item,t)
            elif i=='/':
                t=first/second
                push(item,t)
    return pop_s(item)
my_stack=create()
str_input="356*+"
output = evalute(my_stack,str_input)
print(output)