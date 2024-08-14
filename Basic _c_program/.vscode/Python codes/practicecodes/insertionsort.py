#insertion sort
def insertion_sort(a):
  N=len(a)
  for i in range(1,N):
    j=i
    while a[j-1]>a[j] and j>0:
      temp=a[j-1]
      a[j-1]=a[j]
      a[j]=temp
      j=j-1
a=[30,65,21,13,67]
insertion_sort(a)

print("Sorted list ",a)