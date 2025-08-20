/*#include<iostream>
int main()
{
  int ch,amount,balance=5000;
  std::cout<<"\n your existing balance is 5000 rupees ";
  std::cout<<"\n enter 1 for deposit ";
  std::cout<<"\n enter 2 for withdraw ";
  std::cout<<"\n enter 3 for exit ";
  std::cout<<"\n enter your choice ";
  std::cin>>ch;
  switch(ch)
  {
    case 1:
    std::cout<<"\n enter amount to deposit ";
    std::cin>>amount;
    if(amount>=0)
    {
      balance=(5000+amount);
      std::cout<<"\n balance is "<<balance;
    }
    else
    {
      std::cout<<"\n Invalid amount deposited ";
    }
    break;
    case 2:
    std::cout<<"\n enter amount to withdraw ";
    std::cin>>amount;
    if((amount>=0)&&(amount<5000))
    {
      balance=(5000-amount);
      std::cout<<"\n balance is "<<balance;
    }
    else if (amount>=5000)
    {
      std::cout<<"\n Insufficient balance ";
    }
    else 
    {
      std::cout<<"\n Invalid amount withdrawn ";
    }
    break;
    case 3:
    exit(0);
    break;
    default:
    std::cout<<"\n Invalid choice ";
    std::cout<<"\n enter 1,2,3 ";
    break;
  }
}*/
/*#include<iostream>
int main()
{
  int choice,aoc,a,r,p,t,si,voc,c,s,h;
  std::cout<<"\n enter 1 for area of circle ";
  std::cout<<"\n enter 2 for simple interest ";
  std::cout<<"\n enter 3 for volume of cone ";
  std::cout<<"\n enter 4 for cube of any no. ";
  std::cout<<"\n enter 5 for square of any no. ";
  std::cout<<"\n enter your choice ";
  std::cin>>choice;
  if (choice==1)
  {
    std::cout<<"\n enter the radius ";
    std::cin>>r;
    aoc=(3.14*r*r);
    std::cout<<"\n area of circle is "<<aoc;
  }
  else if (choice==2)
  {
    std::cout<<"\n enter the principle amount ";
    std::cin>>p;
    std::cout<<"\n enter the rate ";
    std::cin>>r;
    std::cout<<"\n enter the time ";
    std::cin>>t;
    si=(p*r*t)/100;
    std::cout<<"\n simple interest is "<<si;
  }
  else if (choice==3)
  {
    std::cout<<"\n enter the radius ";
    std::cin>>r;
    std::cout<<"\n enter the height ";
    std::cin>>h;
    voc=(3.14*r*r*h)/3;
    std::cout<<"\n volume of cone is "<<voc;
  }
  else if (choice==4)
  {
    std::cout<<"\n enter the no. ";
    std::cin>>a;
    c=(a*a*a);
    std::cout<<"\n cube is "<<a;
  }
  else if (choice==5)
  {
    std::cout<<"\n enter the no. ";
    std::cin>>a;
    s=(a*a);
    std::cout<<"\n square is "<<a;
  }
  else 
  {
    std::cout<<"\n invalid choice ";
    std::cout<<"\n enter 1,2,3,4,5 ";
  }
}*/
