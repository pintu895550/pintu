#include<stdio.h>

int main()
{
    int top,n,arr[5],m;

   
    for(top=0;top<=5;top++)
    {
        if(top==5)
        {
            printf("stack is full\n");
        }
        else
        {
            printf("enter  an element: ");
            scanf("%d",&m);
            arr[top]=m;

        }
        
    }

    printf("Present elements are: ");
    for(top=0;top<5;top++)
        {
            printf(" %d\t",arr[top]);
        }
    return 0;
}