void swap_max(int arr[], int l, int n)
{
  int max,i,loc,t;
  max = 0;
  for(i=n;i<l;i++)
  {
    if(arr[i]>max)
    {
      max=arr[i];
      loc=i;
    }
  }
  t=arr[n];
  arr[n]=arr[loc];
  arr[loc]=t;
}

void ssort(int arr[], int l)
{
  int j;
  for(j=0;j<l;j++)
  {
    swap_max(arr,l,j);
  }
}
