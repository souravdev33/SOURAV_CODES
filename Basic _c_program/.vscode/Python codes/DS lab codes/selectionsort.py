#selectionsort
def selection_sort(a):
    N=len(a)
    for i in range(0,N):
        for j in range(i+1,N):
            if a[i]>a[j]:
                temp=a[i]
                a[i]=a[j]
                a[j]=temp
a=[34,12,46,876,13,54]

selection_sort(a)
print("Sorted list : ",a)