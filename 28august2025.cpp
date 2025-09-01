/*#include<iostream>
int main()
{
  int year;
  std::cout<<"\n enter the year ";
  std::cin>>year;
  if(year%4==0)
  std::cout<<"\n It is a leap year ";
  else 
  std::cout<<"\n Not a leap year ";
}*/
/*#include<iostream>
int leapyear(int x)
{
  if(x%4==0)
  std::cout<<"\n leap year ";
  else 
  std::cout<<"\n not leap year ";
}
int main()
{
  int x;
  std::cout<<"\n enter the year ";
  std::cin>>x;
  leapyear(x);
  return 0;
}*/
/*#include<iostream>
int leapyear1();
void main()
{
  leapyear1();
}
int leapyear1()
{
  int year;
  std::cout<<"\n enter the year ";
  std::cin>>year;
  if(year%4==0)
  std::cout<<"\n leap year ";
  else 
  std::cout<<"\n not a leap year ";
  return 0;
}*/
/*#include<iostream>
int main()
{
  int a,b,c;
  std::cout<<"\n enter 3 numbers ";
  std::cin>>a>>b>>c;
  if((a>b)&&(a>c))
  std::cout<<"\n a is greater ";
  else if((b>a)&&(b>c))
  std::cout<<"\n b is greater ";
  else 
  std::cout<<"\n c is greater ";
}*/
/*#include<iostream>
int greater(int x,int y,int z)
{
  if((x>y)&&(x>z))
  std::cout<<"\n x is greater ";
  else if((y>x)&&(y>z))
  std::cout<<"\n y is greater ";
  else 
  std::cout<<"\n z is greater ";
}
int main()
{
  int a,b,c;
  std::cout<<"\n enter three numbers ";
  std::cin>>a>>b>>c;
  greater(a,b,c);
  return 0;
}*/
#include<iostream>
int greater1();
void main()
{
  greater1();
}
int greater1()
{
  int a,b,c;
  std::cout<<"\n enter three numbers ";
  std::cin>>a>>b>>c;
  if((a>b)&&(a>c))
  std::cout<<"\n greater "<<a;
  else if((b>a)&&(b>c))
  std::cout<<"\n greater"<<b;
  else 
  std::cout<<"\n greater"<<c;
  return 0;
}
