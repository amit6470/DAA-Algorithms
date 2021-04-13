#include<iostream>
using namespace std;
int main()
{
string str;
int c=0,flag;

cout<<"Enter the string";
cin>>str;

if((str[0]>='a' && str[0]<='z')
   ||
   (str[0]>='A' && str[0]<='Z')
   ||
   (str[0]=='_'))
   {
       for(int i=1;i<str.length();i++)
       {
           if((str[i]>='a' && str[i]<='z')
           ||
           (str[i]>='A' && str[i]<='Z')
           ||
           (str[i]>='0' && str[i]<='9')
           ||
           (str[i]=='_'))
           {
               c++;
           }
       }
        if(c==str.length())
        {
            flag=0;
        }
   }
   else
   {
       flag=1;
   }
   if(flag==1)
   {
       cout<<str<<"is not a valid identifier";
   }
   else
   {
       cout<<str<<"is a valid identifier";
   }
   return (0);
   }
