T= int(input())
for i in range(T):
    a,b,c=map(int,input().split())
    m=(a+b)/2
    if(a<=b):
        m=m-a
    else:
        m=a-m
    if(m % c==0):
        print(int(m/c))
    else:
        print(int(m/c)+1)