n=(input("Enter number 1 :  "))
sum=0
temp=n
while temp!=0:
    r=temp%10
    sum=sum+r
    temp=temp/10      
print(sum)