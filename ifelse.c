/*even/odd using conditional statement */
#include<stdio.h>


int main(){
    int a;
    printf("enter a number:\n");
    scanf("%d",&a);

    if (a%2!=0)
    {
        printf("%d is odd\n",a);

    }
    else{
        printf("%d is even",a);
    }
    return 0;
}