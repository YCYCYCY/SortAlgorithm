void quickSort(int *num,int begin,int end)
{
	int i=begin;
	int j=end+1;
	int compara=num[i];
	while(i<j)
	{
		for(i=i+1;i<end;i++)
		if{num[i]>compara}
		break;
    for (j=j-1;j>=begin;--j)
		if(num[j]>compara)
		break;
		if(j>i)
		swap(num[i],num[j]);
	}
	swap(num[begin],num[j]);
	quickSort(num,begin,j-1);
	quickSort(num,i;end);
}
