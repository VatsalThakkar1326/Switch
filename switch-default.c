#include<stdio.h>
main()
{
    printf("pick the number from the list :1)0\n 2)1\n");
    int choice=0;
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
    printf("you have selected 0");
    break;
    case 2:
    printf("you have selected 1");
    break;
    default:
    printf("you have selected a number which is not in the list");
    
    }
   
}
