## Read input as specified in the question.
## Print output as specified in the question.

def pairStar(s1,s2,i=0):
    s2=s2+s1[i]
    if (i==len(s1)-1):
        print(s2)
        return
    
    if s1[i]==s1[i+1]:
        s2+='*'
    pairStar(s1,s2,i+1)



s1=input()
s2="";
pairStar(s1,s2)
