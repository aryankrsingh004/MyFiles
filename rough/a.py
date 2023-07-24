List=[1,3,3,2]
def isGood(nums):
    l=len(nums)
    nums.sort()
    b=True
    for i in range(l-2):
        if (i+1!=nums[i]):
            b=False
            break
    if(nums[l-1]==l-1 and b==True):
        return True
    else:
        return False
print(isGood(List))