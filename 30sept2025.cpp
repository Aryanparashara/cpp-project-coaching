/*#include<iostream>
int main()
{
  int arr1[50],arr2[50],size1,size2,i,k,merge[100];
  std::cout<<"\n Enter Array 1 size ";
  std::cin>>size1;
  std::cout<<"\n Enter Array 2 Elements ";
  for(i=0;i<size1;i++)
  {
    cin>>arr1[i];
    merge[i]=arr1[i];
  }
  k=1;
  std::cout<<"\n Enter Array 2 size ";
  std::cin>>size2;
  std::cout<<"\n Enter Array 2 Elements ";
  for(i=0;i<size2;i++)
  {
    std::cin>>arr2[i];
    merge[k]=arr2[i];
    k++;
  }
  std::cout<<"\n The new array will be form: ";
  for(i=0;i<k;i++)
  {
    std::cout<<merge[i];
  }
}*/
/*#include<iostream>
int main()
{
  int arr[50],i,j,n,temp;
  std::cout<<"\n Enter total no. of elements to store ";
  std::cin>>n;
  std::cout<<"\n Enter "<<n<<" elements ";
  for(i=0;i<n;i++)
  {
    std::cin>>arr[i];
  }
  for(i=0;i<(n-1);i++)
  {
    for(j=0;j<(n-i-1);j++)
    {
      if(arr[j]>arr[j+1])
      {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
  std::cout<<"\n Array elements is ascending order ";
  for(i=0;i<n;i++)
  {
    std::cout<<arr[i];
  }
}*/
