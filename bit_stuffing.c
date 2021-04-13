#include<stdio.h>
#include<string.h>
int main()
{
    char ch, array[100]={"01111110"},arr[100];
    int counter=0,i=8,j,k;
    printf("Enter original data");
    while((ch=getchar())!='\n')
    {
        if(ch=="1")
            ++counter;
        else
            counter=0;

     array[i++]=ch;
     if(counter==5)
     {
        array[i++]='0';
        counter=0;
     }
    }
    strcat(array,"01111110");
    printf("\n The stuffed Data is \n");
    for(j=0;j<i+8;++j)

        printf("%c",array[j]);

    counter=0;
    printf("\n The destuffed data is :");
    for(j=0,k=0;j<i+8;++j)
    {
        if(array[j]=='1')
            ++counter;
        else
            counter=0;
        arr[k++]=array[j];
        if(counter==6)
            break;
        else if(counter==5 && array[j]=='0')
        {
            ++j;
            counter=0;
        }
    }


for(j=0;j<k-strlen("01111110");j++)
    printf("%c", arr[j]);



}
