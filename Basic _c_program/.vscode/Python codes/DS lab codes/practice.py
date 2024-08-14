def bubble_sort(A):
    N=len(A)
    for i in range(0,N):
        for j in range(0,N-i-1):
            if A[j]>A[j+1]:
                temp=A[j]
                A[j]=A[j+1]
                A[j+1]=temp
            
            
A=[53,75,22,97,23]

bubble_sort(A)
print("SOrted list : ",A)