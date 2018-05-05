/* print average of integers having tenth digit as odd digit
Input:
7
30 15 41 24 48 27 34
Output:
26.33   */


n,l,s,c=input().strip(),list(map(int,input().strip().split())),0,0
for i in l:
    if (int(i/10)%10) %2==1:
        s=s+i
        c=c+1
if c==0:
    print("0.00")
else:    
    print("%.2f" %(s/c))        
