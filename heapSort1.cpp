void HeapAdjust(int *a,int pos,int size)
{
	int lchild=2*pos;
	int rchild=2*pos+1;
	int min=pos;
	if(pos<=size/2)
	{
		if(lchild<=size && a[lchild]<a[min])
			min=lchild;
		if(rchild<=size && a[rchild]<a[min])
			min=rchild;
		if(min!=pos)
		{
			int temp=a[pos];
			a[pos]=a[min];
			a[min]=temp;
			HeapAjust(a,min,size);
		}
	}
}
void BuildHeap(int *a,int size)
{
	int pos;
	for(pos=size/2;pos>=0;pos--)
		HeapAdjust(a,pos,size);
}
void HeapSort(int *a,int size)
{
	int pos;
	BuildHeap(a,size);
	for(pos=size-1;pos>=0;pos--)
	{
		int temp=a[pos];
		a[pos]=a[0];
		a[0]=temp;
		HeapAdjust(a,1,pos-1);

	}
}