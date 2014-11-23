#include <iostream>
using namespace std;
void HeapAdjust(int *a,int pos,int size) 
{
	int lchild = 2*pos+1;
	int rchild =lchild+1;
	int max=pos;
	if(lchild < size && a[lchild]>a[max])
		max=lchild;
	if(rchild < size && a[rchild]>a[max])
		max=rchild;
	if(max != pos)
	{
		int temp=a[pos];
		a[pos]=a[max];
		a[max]=temp;
		HeapAdjust(a,max,size);
	}
		
}
void BuildHeap(int *a,int size)
{
	for(int pos = size/2-1;pos >= 0;pos--)
		HeapAdjust(a,pos,size);
}
void HeapSort(int *a,int size)
{
	BuildHeap(a,size);
	for(int pos=size-1;pos > 0;pos--)
	{
		int temp=a[pos];
		a[pos]=a[0];
		a[0]=temp;
		HeapAdjust(a,0,pos-1);
	}
}
