''' given string s .remove duplicates and sort and print

Input:
language
Output:
aeglnu   '''

n=list(set(input().strip()))  
n.sort()
for i in n:
    print(i,end="")
    

''' or 
alternate solution'''

print(*sorted(set(input().strip())),sep="")
