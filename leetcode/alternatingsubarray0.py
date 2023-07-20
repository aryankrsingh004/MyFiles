class Solution:
    def alternatingSubarray(self, nums: List[int]) -> int:
        ans=[]
        for i in range(len(nums)-1):
            count=1
            for j in range(i,len(nums)-(i-1),2):
                if(j+1<len(nums)):
                    if((nums[j+1]-nums[i]==1 ) and nums[j]==nums[i]):
                        count=count+1
                        if(j+2<len(nums)):
                            if( nums[j+2]==nums[i] ):
                                count=count+1
                        else:
                            break
                
                elif(j+1<len(nums)):
                    if(( nums[j+1]-nums[i]==-1) and nums[j]==nums[i]):
                        count=count+1
                        if(j+2<len(nums)):
                            if( nums[j+2]==nums[i] ):
                                count=count+1
                        else:
                            break
            ans.append(count)
            count=1 
        if(max(ans)==1):
            return -1
        else:
            return max(ans)