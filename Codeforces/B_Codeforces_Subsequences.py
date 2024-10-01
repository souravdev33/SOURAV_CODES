k=int(input())
n=int(k**0.1)
m=n**10
for c in "codeforces":
    cur=n+(m<k)
    print(c*cur,end="")
    m=m//n*cur