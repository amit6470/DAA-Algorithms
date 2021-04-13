#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{ int n,qe,rqe[20],s,st,temp,i,j;
cout<<"enter the range of the cylinders";
cin>>n;
cout<<"Enter the number of queue elements";
cin>>qe;
cout<<"Emter the reference queue elements";
for(i=0;i<qe;i++)
    cin>>rqe[i];
cout<<"Enter the starting head position";
cin>>st;
for(i=0;i<qe;i++)
{
  for(j=i+1;j<qe;j++)
  {
      if(rqe[i]>rqe[j])
      {
          temp=rqe[i];
          rqe[i]=rqe[j];
          rqe[j]=temp;
      }
  }
}
for(i=0;i<qe;i++)
{
    if(st<rqe[i])
    {
        for(j=i-1;j>=0;j--)
        {
            s=s+abs(st-rqe[j]);
            st=rqe[j];
        }
    s=s+abs(st-0);
    st=0;
    for(j=1;j<qe;j++)
    {
        s=s+abs(st-rqe[j]);
    }
    }
}
cout<<"Total number of head movement : "<<s;
return 0;
}
