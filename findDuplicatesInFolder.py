'''find duplicates in folder.The directory structure of file system is given in n lines.Each line contain parent and child file .
If a folder has 2 file with same name then print it if no duplicates found print "-1" and the names should be in ascending order..
Input:
5
videos trailer.mp4
documents word.doc
documents animal.jpg
test trailer.mp4
documents word.doc

Output:
word.doc

Input:
7
src style.css
videos HD.mp4
documents sheet.xls
documents animal.jpg
test animal.jpg
documents sheet.xls
src.style.css

Output:
sheet.xls
style.css    '''


n,l,ans=int(input()),[],[]
for i in range(n):
    l.append(input().strip().split())
for i in range(len(l)-1):
    for j in range(i+1,len(l)):
        if l[i]==l[j] and l[j][1]!='*':   #since * and * will be checked and condition becomes true so '*' will also be appended
            ans.append(l[j][1])
            l[j][1]='*' 
res=list(set(ans))            
if len(res) > 0: 
    res.sort()
    for i in res:
        print(i)
else:
    print("-1")
