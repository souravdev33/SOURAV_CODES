def LPS_table(p):
    n=len(p)
    lps=[0]*n
    i=0
    j=1
    lps[0]=0
    
    while j<n:
        if p[i]==p[j]:
            lps[j]=i+1
            i=i+1
            j=j+1
        else:
            if i==0:
                lps[j]=0
                j=j+1
            else:
                i=lps[i-1]
    return(lps)
    
    
def kmp(T,P):
    m=len(T)
    n=len(P)
    lps=LPS_table(P)
    i=0
    j=0
    while i<m:
        if T[i]==P[j]:
            i=i+1
            j=j+1
        
        if j==n:
            print("Pattern found at location",(i-j))
            j=lps[j-1]
        
        elif T[i]!=P[j]:
            if j==0:
                i=i+1
            else:
                j=lps[j-1]
            
      
      
               
T='ABCDABD'
P='CDA'
kmp(T,P)




    