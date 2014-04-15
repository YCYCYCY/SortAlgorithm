/*************************************************************************
 > File Name: mergingSort.cpp
 > Author:  何源川
 > Mail: 249288984@qq.com 
 > Created Time: Tue 15 Apr 2014 10:11:17 AM CST
**************************************************************************/
void MergeArray(int *,int,int,int,int *);
void MergeSort(int *data,int first,int last,int *temp)
{
  if(first<last)
  {
    int mid=(first+last)/2;
    MergeSort(data,first,mid,temp);
    MergeSort(data,mid+1,last,temp);
    MergeArray(data,first,mid,last,temp);
  }
}
void MergeArray(int *data,int first,int mid,int last,int *temp)
{
  int i=first,j=mid+1,k=first;
  while(i<=mid && j<=last)
  {
    if(data[i]<data[j])
      temp[k++]=data[i++];
    else
      temp[k++]=data[j++];
  }
  while(i<=mid)
    temp[k++]=data[i++];
  while(j<=last)
    temp[k++]=data[j++];
}
