#include <iostream>
using namespace std;
void HeapAdjust(int *a,int pos,int size) 
{
	int lchild = 2*pos;
	int rchild =2*pos+1;
	int max=pos;
	if(pos<=size/2)
	{
		if(lchild<size && a[lchild]>a[max])
			max=lchild;
		if(rchild<size && a[rchild]>a[max])
			max=rchild;
		if(max!=pos)
		{
			int temp=a[pos];
			a[pos]=a[max];
			a[max]=temp;
			HeapAdjust(a,max,size);
		}
		
	}
}
void BuildHeap(int *a,int size)
{
	int pos;
	for(pos=size/2;i>=0;i--)
	HeapAdjust(a,pos,size);
}
void HeapSort(int *a,int size)
{
	int pos;
	BuildHeap(a,size);
	for(pos=size-1;pos>=0;i--)
	{
		int temp=a[i];
		a[i]=a[1];
		a[1]=temp;
		HeapAdjust(a,1,i-1);
	}
}
