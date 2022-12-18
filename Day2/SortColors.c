void sortColors(int* nums, int numsSize){
    int cz=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==0)
        {
            ++cz;
        }
    }
    int oz=0;

    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==1)
        {
            ++oz;
        }
    }

    int tz=0;

    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==2)
        {
            ++tz;
        }
    }

    for(int i=0;i<cz;i++)
    {
        nums[i]=0;
    }
    
    
    for(int i=cz;i<cz+oz;i++)
    {
        nums[i]=1;
    }

    for(int i=cz+oz;i<numsSize;i++)
    {
        nums[i]=2;
    }
}
