class Solution(object):
    def diagonalPrime(self, nums):
        l=len(nums)
        m=max(max(i) for i in nums)
        n=len(set(len(r) for r in nums))
        if 1<=l<=300 and 1<=m<=4*(10**6) and n==1:
            ri,le=0,0
            for j in range(l):
                ip=1
                if nums[j][j]<2:
                    ip=0
                else:
                    for k in range(2,int(nums[j][j]**0.5)+1):
                        if nums[j][j]%k==0:
                            ip=0
                            break
                    if ip:
                        ri=max(ri,nums[j][j])
                    ip=1
                    if nums[j][l-j-1]<2:
                        ip=0
                    else:
                        for o in range(2,int(nums[j][l-j-1]**0.5)+1):
                            if nums[j][l-j-1]%o==0:
                                ip=0
                                break
                    if ip:
                        le=max(le,nums[j][l-j-1])
            return max(ri,le)
        return 0
                    
        
