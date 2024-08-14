def insertion_sort(a):
    N=len(a)
    for i in range(1,N):
        j=i
        while a[j-1]>a[j] and j>0:
            temp=a[j-1]
            a[j-1]=a[j]
            a[j]=temp
            
            j=j-1

a=[]

N=int(input("Enter the number of element : "))
for i in range(N):
    element=int(input("Element no {} : ".format(i+1)))
    a.append(element)
insertion_sort(a)

print("sorted list : ",a)