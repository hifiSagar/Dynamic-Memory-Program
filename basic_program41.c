#include<stdio.h>
void main(){
 
int a,b,choice;   
   
printf("Enter the Choice\n1.Addition\n2.Subtract\n3.Multiply\n4.Division\n");
printf("Enter the choice>>> ");

scanf("%d", &choice);
printf("Enter the number 1 >> ");
scanf("%d",&a);
printf("Enter the number 2 >> ");
scanf("%d",&b);
if (choice==1)
{
    printf("Addition is : %d\n",a+b);
}
else if (choice==2)
{
    printf("Addition is : %d\n",a-b);
} 
else if (choice==3)
{
    printf("Addition is : %d\n",a*b);
}
else if (choice==4)
{
    printf("Addition is : %d\n",a/b);
}
else
{
    printf("Invalid choice!!\n");
}
}


