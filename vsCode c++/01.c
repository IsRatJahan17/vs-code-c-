#include<stdio.h>
#include <string.h>
int main()
{
    char x[35];
    char y[35];
    char z[35];
    int i;
    scanf("%s",&x);
    scanf("%s",&y);
    int len1=strlen(x);
    int len2=strlen(y);

    int temp;
    if(len1>=len2)
        temp=len1;
    else
        temp=len2;

    for(int i=0;i<=temp;i++){
        if (x[i]=='0' && y[i]=='0')
            z[i]='0';

        if (x[i]=='1' && y[i]=='0')
            z[i]='1';


        if (x[i]=='0' && y[i]=='1')
            z[i]='1';


        if (x[i]=='1' && y[i]=='1')
            z[i]='0';


    }


    for(int k=0;k<temp;k++){
        printf("%c",z[k]);
    }
    printf("\n");



    return 0;
}
