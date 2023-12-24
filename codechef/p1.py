t=int(input())
for T in range(t):
    n=int(input())
    f=True
    inp = list(map(int,input().split())) 
    if(n < 3):
        print("YES")
        continue
    if(n==3):
        if(inp[1] > inp[2]):
            print("NO")
        else:
            print("YEs")
        continue
    if(n==4):
        if(inp[1] > inp[2] or inp[2] > inp[3]):
            print("NO")
        else:
            print("YES")
        continue
    pow = 0
    for i in range(6):
        if(2**i >= n):
            pow = i-1
            break
    i = 2
    # print(pow)
    while(i != pow):
        for j in range(2**(i-1)-1, (2**i)-1, 1):
            if(inp[j] > inp[j+1]):
                f = False
        i=i+1
    for k in range(2**i, n-1,1):
        if(inp[k] >= inp[k+1]):
            f=False
    if(f == True):
        print("YES")
    else:
        print("NO")


