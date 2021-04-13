#include<iostream>
using namespace std;
int main()
{
    int i,j, frames[20],str[20],pf=0,dead=-1,fr,refer;

    cout<<"FIFO Age REPLACEMENT ALGORITHM\n";
    cout<<"Enter the number of frames";
    cin>>fr;
    cout<<"Enter the number of reference string\n";
    cin>>refer;
    cout<<"Enter the reference string\n";
    for(i=0;i<refer;i++)
    {
        cin>>str[i];
    }
    for(i=0;i<refer;i++)
    {
        cout<<"The reference string is:"<<str[i]<<"\n";
    }

    for(j=0;j<fr;j++)
    {   for(i=0;i=j;i++)
        {
            frames[j]=str[i];
        }
    }
    for(j=0;j<fr;j++)
        {
            cout<<frames[j];
        }

}
