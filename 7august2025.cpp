/*#include<iostream>
int main()
{
  int per;
  std::cout<<"\n enter the percentage";
  std::cin>>per;
  if(per>=90)
  {
    std::cout<<"\n you will get 100per. scholarship";
  }
  else if ((per>=60)&&(per<90))
  {
    std::cout<<"\n you will get 60per. scholarship";
  }
  else if ((per>=40)&&(per<60))
  {
    std::cout<<"\n you will get 40per. scholarship";
  }
  else 
  {
    std::cout<<"\n no scholarship";
  }
}*/
/*#include<iostream>
int main()
{
  int sales,com;
  std::cout<<"\n enter the sales";
  std::cin>>sales;
  if(sales>=5000)
  {
    com=(sales*5)/100;
    std::cout<<"\n commision will be "<<com;
  }
  else if ((sales>=3000)&&(sales<5000))
  {
    com=(sales*3)/100;
    std::cout<<"\n commision will be "<<com;
  }
  else if ((sales>=1000)&&(sales<3000))
  {
    com=(sales*1)/100;
    std::cout<<"\n commision will be "<<com;
  }
  else
  {
    std::cout<<"\n commision will be"<<com;
  }
}*/
/*#include<iostream>
int main()
{
  int dd,mm,yy;
  std::cout<<"\n enter date in DD/MM/YYYY format";
  std::cin>>dd>>mm>>yy;
  if((yy>=1900)&&(yy<=9999))
  {
    if((mm>=1)&&(mm<=12))
    {
      if((dd>=1)&&(dd<=31)&&(mm==1)||(mm==3)||(mm==5)||(mm==7)||(mm==8)||(mm==10)||(mm==12))
      {
        std::cout<<"\n date is valid.\n ";
      }
      else if ((dd>=1)&&(dd<=30)&&(mm==4)||(mm==6)||(mm==9)||(mm==11))
      {
        std::cout<<"\n date is valid.\n ";
      }
      else if ((dd>=1)&&(dd<=28)&&(mm==2))
      {
        std::cout<<"\n date is valid.\n ";
      }
      else if ((dd==29)&&(mm==2)&&(yy%4==0))
      {
        std::cout<<"\n date is valid.\n ";
      }
      else
      {
        std::cout<<"\n day is invalid.\n ";
      }
    }
  }
    else
    {
      std::cout<<"\n month is not valid.\n ";
      std::cout<<"\n year is not valid.\n ";
    }
}*/
