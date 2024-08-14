def Naive_pattern(txt,pat):
    m=len(txt)
    n=len(pat)
    for i in range(0,m-n):
        for j in range(0,n):
            if (txt[i+j]!=pat[j]):
                break
            if j==n-1:
                print("PAtter found at",i)
                
txt='HSYSDVBFUF'
pat='SDV'
Naive_pattern(txt,pat)