void shellSort(int *num,int size)
{
    int len=size;
    while(len>1)
    {
        len=(len+1)/2;
        for(int i=0;i<size-len;i++)
            if(num[i]>num[i+len])
                swp(num[i],num[i+len]);
    }
}
