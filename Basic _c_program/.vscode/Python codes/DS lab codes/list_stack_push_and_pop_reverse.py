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


def reverse(item,str_input):
    N = len(str_input)
    
    for i in range(N):
        push(item,str_input[i])
    
    temp=""
    
    for i in range(N):
        temp=temp+pop_s(item)
    return temp


def top(item):
    N=len(item)
    return item[N-1]
    

my_stack=create()
str_input="Hello"
output=reverse(my_stack,str_input)
print("After reverse : ",output)
