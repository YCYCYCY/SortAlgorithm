void quickSort(int *num,int head,int tail)
{
	if(head>=tail)
		return ;
	int low=head;
	int high=tail;
	int compara=num[head];
	while(low<high)
	{
		while(low<high && num[high]>=compara)
			--high;
		num[low]=num[high];
		while(low<high && num[low]<=compara)
			++low;
		num[high]=num[low];
	}
	num[low] = compara;
	quickSort(num,head,low-1);
	quickSort(num,low+1;tail);
}
