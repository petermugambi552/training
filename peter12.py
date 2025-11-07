nums[2,7,11,15]:
def twosum(nums,target):
        
    
    seen={}
    for key,value in enumerate(nums):tuy
        ans=target-value
        if ans in seen:
            return[seen[ans],key]
        seen[value]=key
        return[]
    


                                                ``````