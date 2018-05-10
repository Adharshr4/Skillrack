'''Given an array, For each element find the value of nearest element to the right which is having frequency greater than as that of current element. If there does not exist an answer for a position, then print '-1'

Please help Raju and his team to solve this problem to get the Laddus.

Input
First line contains T denoting the no of test cases.
First line of each test case contains N denoting the no of elements in array.
Second line of each test case contains N integers (A1..An) denoting the given array.

Output For each test case print space separated N numbers denoting the answer corresponding answer

Input:
3
10
1 3 7 2 5 1 4 2 1 5
5
1 1 1 1 1
6
1 1 2 2 2 3

Output:
-1 2 2 1 1 -1 2 1 -1 -1 
-1 -1 -1 -1 -1 
2 2 -1 -1 -1 -1               '''


n,f=int(input().strip()),0
for i in range(n):
    l,freq=[],[]
    noOfEle,l=int(input().strip()),list(map(int,input().strip().split()))
    for i in l:
        freq.append(l.count(i))
    for i in range(len(freq)):
        for j in range(i+1,len(freq)):
            if freq[j] > freq[i]:
                print(l[j],end=" ")
                f=1
                break
        if f==0:
            print("-1",end=" ")
        f=0    
    print()        
