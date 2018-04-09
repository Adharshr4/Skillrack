/*Given 2 numbers print as in example
Input:
3 4
Output:
3
4 4
5 5 5
6 6 6 6
6 6 6 6
5 5 5
4 4 
3

Input:
7 9
Output:
7
8 8 
9 9 9
10 10 10 10
11 11 11 11 11
12 12 12 12 12 12
13 13 13 13 13 13 13
14 14 14 14 14 14 14 14
15 15 15 15 15 15 15 15 15
15 15 15 15 15 15 15 15 15
14 14 14 14 14 14 14 14
13 13 13 13 13 13 13
12 12 12 12 12 12
11 11 11 11 11
10 10 10 10
9 9 9
8 8
7   */

void printPattern(int base, int N)
{
    int first=base,i,dupn=N,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d ",first);
        }
        first++;
        printf("\n");
    }
    first--;
    for(i=0;i<N;i++)
    {
        for(j=0;j<dupn;j++)
        {
            printf("%d ",first);
        }
        printf("\n");
        first--;
        dupn--;
    }
  //  printf("n");
}
int main()
{
    int start,N;
    scanf("%d %d",&start,&N);
    printPattern(start,N);
    return 0;
}
