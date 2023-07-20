def fac(a):
    if a>0:
        return a + fac( a-1 )
    else:
        return 0

print(fac(10))
