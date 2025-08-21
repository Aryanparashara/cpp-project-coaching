/*#include<iostream>
int main()
{
  int age;
  std::cout<<"\n enter your age ";
  std::cin>>age;
  if(age>=18)
  {
    goto g;
  }
  else 
  {
    goto s;
  }
  g:
  std::cout<<"\n you are eligible ";
  goto end;
  s:
  std::cout<<"\n you are not eligible ";
  end:
  return 0;
}*/
/*#include<iostream>
int main()
{
  int a,b;
  std::cout<<"\n enter 2 no.s ";
  std::cin>>a>>b;
  if (a>b)
  {
    goto g;
  }
  else 
  {
    goto s;
  }
  g:
  std::cout<<"\n a is greater than b ";
  goto end;
  s:
  std::cout<<"\n b is greater than a ";
  end:
  return 0;
}*/
/*#include<iostream>
int main()
{
  int i;
  for(i=1;i<=10;i++)
  {
    std::cout<<"\n "<<i;
    if(i==5)
    {
      break;
    }
  }
  std::cout<<"\n came outside of loop i="<<i;
}*/
/*#include<iostream>
int main()
{
  int i;
  for (i=1;i<=10;i++)
  {
    if (i==5)
    continue ;
    std::cout<<"\n "<<i;
  }
}*/
/*#include<iostream>
int main()
{
  int i,n,ans;
  std::cout<<"\n enter the number ";
  std::cin>>n;
  for(i=1;i<=10;i++)
  {
    ans =n*i;
    std::cout<<"\n "<<ans;
  }
}*/
/*#include<iostream>
int main()
{
  int i,n,ans;
  std::cout<<"\n enter the number ";
  std::cin>>n;
  for(i=1;i<=10;i++)
  {
    ans =n*i;
    std::cout<<"\n "<<n<<" * "<<i<<" = "<<ans;
  }
}*/
