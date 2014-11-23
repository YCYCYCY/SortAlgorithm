void shellSort(int *num,int size)
{
    int offset=size/2;
    while(offset>0)
    {
        for(int i=offset;i<size;++i)
        {
            int compara=num[i];
            //insert sort
            #ifdef FUN1
            for(int j=i-offset;j>=0 && num[j]>compara;j-=offset)
                num[j+offset]=num[j];
            num[j+offset]=compara;
            #endif //FUN1
            
            #ifdef FUN2
            for(int j=i;j>=offset && num[j-offset]>compara;j-=offset)
                num[j]=num[j-offset];
            num[j]=compara;
            #endif //FUN2
        }
        offset/=2;
    }
}
