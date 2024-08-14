#bubble sort

def bubble_sort(a):
    N=len(a)
    for i in range(0,N):
        for j in range(0,N-i-1):
            if a[j]>a[j+1]:
                temp=a[j]
                a[j]=a[j+1]
                a[j+1]=temp

a=[]
N=int(input("Enter the number of elements : "))

for i in range(N):
    elements=int(input("Enter element no {} :".format(i+1)))
    a.append(elements)
    
bubble_sort(a)
print("Sorted list : ",a)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           