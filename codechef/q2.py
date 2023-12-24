for t in range(int(input())):
    s=input().strip()
    z=s.count("0")
    o=s.count('1')
    ans=""
    # print(s)
    for i in range(len(s)):
        if s[i]=='0' and o<1:
            break
        if s[i]=='1' and z<1:
            break
        if s[i]=='0' and o>0:
            ans+='1'
            o-=1
        elif s[i]=='1' and z>0:
            ans+='0'
            z-=1
    
    print(abs(len(s)-len(ans)))