//并规排序递归实现方式
void MergeSort(int *data,int len)
{
	if (len == 1)
		return ;
   mid = len /2;
   mergeSort(data,mid);
   mergeSort(data+mid,len-mid);
   int* tmp = (int *)malloc(len *sizeof(int));
   int* cur1=data,cur2=data+mid;
   while(cur1 < data+mid && cur2 < data+len)
   {
	   if (*cur1<*cur2)
		   *tmp++ = *cur1++;
	   else
		   *tmp++ = *cur2++; 
   }
   if (cur1 == data+mid)
   {
	   while(cur2 < data+len)
		    *tmp++ = *cur2++; 
   }
   else
   {
	   while(cur1 < data+len)
		   *tmp++ = *cur1++;
   }
   memmove(data,tmp,len*sizeof(int))
}
//快速排序
void QuickSort(int *data,int len)
{
	int  phead = 0;
	int  ptail = len-1;
	while(ptail>phead)
	{
		int tmp;
		while(data[ptail] > data[phead])
			++phead;
		tmp = data[phead];
		data[phead]= data[ptail];
		data[ptail] = tmp;
		--ptail;
		while(data[phead] < data[ptail])
			--ptail;
		tmp = data[phead];
		data[phead]= data[ptail];
		data[ptail] = tmp;
		++phead;
	}
	QuickSort(data,ptail);
	QuickSort(data+phead+1,len-phead-1)
}
//堆排序
void BuildHeap(int *data,int len)
{
	int cur = len/2-1;
	int max;
	while(cur >= 0)
	{
		AdjustHeap(data,len,cur);
		--cur;
	}	
}
void AdjustHeap(int *data,int len,int cur)
{	int max = cur;
	if(2*cur+1<len && data[2*cur+1]<data[max])
		max = 2*cur+1;
	if (2*cur+2 < len && data[2*cur+2] > data[max]])
		max = 2*cur+2;
	if (max != cur)
	{
		int tmp = data[max];
		data[max] = data[cur];
		data[cur] = tmp;
		AdjustHeap(data,len,max)
	}
}
void HeapSort(int *data,int len)
{
	BuildHeap(data,len);
	int i= len;
	while(i>1)
	{
		int tmp = data[0];
		data[0] = data[i-1];
		data[i-1] = tmp;
		--i;
		AdjustHeap(data,i,0)
	}
}

//shellSort
void ShellSort(int *data,int len)
{
	for (step = len/2;step >1;step/=2)
	{
		for(cur = step;cur<len;cur++)
		{
			int cmp = data[cur];
			for(int p = cur-step;p>=0&&data[p]>cmp;p-=step)
				data[p+cur]=data[p];
			data[p]=cmp;
			
		}
	}
}