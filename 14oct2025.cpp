// string length 
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
  string str = "Hello Geeks";
  cout<<"Length using size(): "<<str.size()<<endl;
  cout<<"Length using length(): "<<str.length()<<endl;
  return 0;
}*/

// Concatenation of string  
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
  string str1 = "Hello";
  string str2 = "Geeks";
  string result1 = str1+str2;
  cout<<"Concatenation using : "<<result1<<endl;
  string result2 = str1;
  result2.append(str2);
  cout<<"Concatenation usind append() : "<<result2<<endl;
  return 0;
}*/

// modifying a string 
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
  string str="ICT ITI";
  str.push_back('!');
  cout<<"After push_back : "<<str<<endl;
  str.pop_back();
  cout<<"After pop_back : "<<str<<endl;
  str.insert(5,"IGNOU");
  cout<<"after insert : "<<str<<endl;
  str.erase(5,4);
  cout<<"after erase : "<<str<<endl;
  return 0;
}*/

// substring extraction 
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
  string str = " ICT ITI ";
  string sub1 = str.substr(0,2);
  cout<<"substring 1: "<<sub1<<endl;
  string sub2 = str.substr(4,6);
  cout<<"substring 2 : "<<sub2<<endl;
  return 0;
}*/
