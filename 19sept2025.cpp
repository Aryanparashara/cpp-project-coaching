/*#include<iostream>
int main()
{
  int array[100];
  int i,n,x,pos;
  std::cout<<"\n Enter the  size of an array";
  std::cin>>n;
  std::cout<<"\n Enter the elements ";
  for(i=0;i<n;i++0)
  {
    std::cin>>array[i];
  }
  std::cout<<"\n Input array elements are: ";
  for(i=0;i<n;i++)
  {
    std::cout<<"\n "<<array[i];
  }
}*/
/*#include<iostream>
int main()
{
  int a[100],element,i,loc,size,n=0,j=0;
  std::cout<<"\n Enter size of an array ";
  std::cin>>size;
  std::cout<<"\n Enter "<<size<<" array elements ";
  for(i=0;i<size;i++)
  {
    std::cin>>a[i];
  }
  std::cout<<"\n List before intersection ";
  for(i=0;i<size;i++)
  {
    std::cout<<"\n "<<a[i];
  }
  std::cout<<"\n Enter an element to insert ";
  std::cin>>element;
  std::cout<<"\n Enter the Position of element "<<element;
  std::cin>>loc;
  loc=loc-1;
  size=size+1;
  for(i=size;i>=loc;i--)
  {
    a[i+1]=a[i];
  }
  a[loc]=element;
  std::cout<<"\n list after insertion";
  for(i=0;i<size;i++)
  {
    std::cout<<"\n "<<a[i];
  }
}*/
