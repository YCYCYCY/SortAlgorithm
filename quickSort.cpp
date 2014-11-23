void quickSort(int *num,int head,int tail)
{
	if(head>=tail)
		return ;
	int begin=head+1;
	int end=tail;
	int compara=num[head];
	while(begin<end)
	{
		while(num[begin]<=compara)
			++begin;
		while(num[end]>=compara)
			--end;
		if(begin<end)
			swap(num,begin,end);
		++begin;
		--end;
	}
	swap(num,end,head);
	quickSort(num,head,end-1);
	quickSort(num,end+1;tail);
}
