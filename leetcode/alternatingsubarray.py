class Solution:
    def alternatingSubarray(nums):
        ans=[]
        for i in range(len(nums)-1):
            up=1
            down=1
            for j in range(i,len(nums),2):
                if(j+1<len(nums)):
                    if((nums[j+1]-nums[i]==1 ) and nums[j]==nums[i]):
                        up=up+1
                        if(j+2<len(nums)):
                            if( nums[j+2]==nums[i] ):
                                up=up+1
                        else:
                            break
                #elif(j+1<len(nums)):
                    if(( nums[j+1]-nums[i]==-1) and nums[j]==nums[i]):
                        down=down+1
                        if(j+2<len(nums)):
                            if( nums[j+2]==nums[i] ):
                                down=down+1
                        else:
                            break
                #if(a==count):
                 #   break
                print(up," " , down)                            
            
            if (down==2):
                ans.append(max(up,-1))
            else:
                ans.append(max(up,down))
        print(ans)                
        if(max(ans)==1):
            return -1
        else:
            return max(ans)


Solution.alternatingSubarray(nums = [8,4,3,2,6,4,3,5,2,8])

