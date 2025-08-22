/*#include<iostream>
int main()
{
  int i,sum ;
  std::cout<<"\n first 10natural numbers ";
  for (i=1;i<=10;i++)
  {
    std::cout<<"\n "<<i;
    sum=sum+i;
  }
  std::cout<<"\n sum is "<<sum;
}*/
/*#include<iostream>
int main()
{
  int i,sum ;
  std::cout<<"\n first 10 even numbers ";
  for (i=2;i<=20;i=i+2)
  {
    std::cout<<"\n "<<i;
    sum=sum+i;
  }
  std::cout<<"\n sum is "<<sum;
}*/
/*#include<iostream>
int main()
{
  int i,sum ;
  std::cout<<"\n first 10 odd numbers ";
  for (i=1;i<=20;i=i+2)
  {
    std::cout<<"\n "<<i;
    sum=sum+i;
  }
  std::cout<<"\n sum is "<<sum;
}*/
/*#include<iostream>
int main()
{
  int i=1,sum=0;
  std::cout<<"\n first 10 natural numbers ";
  do 
  {
    std::cout<<"\n "<<i;
    sum=sum+i;
    i++;
  }
  while(i<=10);
  std::cout<<"\n sum of first 10 natural numbers is "<<sum;
}*/
/*#include<iostream>
int main()
{
  int i=2,sum=0;
  std::cout<<"\n first 10 even numbers ";
  do 
  {
    std::cout<<"\n "<<i;
    sum=sum+i;
    i=i+2;
  }
  while(i<=20);
  std::cout<<"\n sum of first 10 even numbers is "<<sum;
}*/
/*#include<iostream>
int main()
{
  int i=1,sum=0;
  std::cout<<"\n first 10 odd numbers ";
  do 
  {
    std::cout<<"\n "<<i;
    sum=sum+i;
    i=i+2;
  }
  while(i<=20);
  std::cout<<"\n sum of first 10 odd numbers is "<<sum;
}*/
/*#include<iostream>
int main()
{
  int i=1;
  do
  {
    std::cout<<"\n "<<i;
    if(i==5)
    break;
    i++;
  }
  while(i<=10);
  std::cout<<"\n came outside of loop i= "<<i;
}*/
/*#include<iostream>
int main()
{
  int i=1;
  do
  {
    std::cout<<"\n "<<i;
    i++;
    if(i==5)
    continue;
  }
  while(i<=10);
}*/
/*#include<iostream>
int main()
{
  int i=1,n,ans;
  std::cout<<"\n enter the number ";
  std::cin>>n;
  do 
  {
    ans=n*i;
    std::cout<<"\n "<<n<<" * "<<i<<" = "<<ans;
    i++;
  }
  while(i<=10);
}*/
/*#include<iostream>
int main()
{
  int i=1,n,ans;
  std::cout<<"\n enter the number ";
  std::cin>>n;
  do 
  {
    ans=n*i;
    std::cout<<"\n "<<ans;
    i++;
  }
  while(i<=10);
}*/
/*#include<iostream>
int main()
{
  int n,i,ans=1;
  std::cout<<"\n enter the number ";
  std::cin>>n;
  for (i=1;i<=n;i++)
  {
    ans=ans*i;
  }
  std::cout<<"\n factorial is "<<ans;
}*/
/*#include<iostream>
int main()
{
  int i=1,n,ans=1;
  std::cout<<"\n enter the number ";
  std::cin>>n;
  do
  {
    ans=ans*i;
    i++;
  }
  while (i<=n);
  std::cout<<"\n factorial is "<<ans;
}*/
