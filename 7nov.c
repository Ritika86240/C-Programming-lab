// storage classes
/*#include<stdio.h>
void vansh();
void main ()
{
vansh();
vansh();
 vansh();
} 
void vansh()
{
    int x=1;
    printf(" %d\n", x);
    x=x+5;

}

#include<stdio.h>
void vansh();
void main ()
{
vansh();
vansh();
 vansh();
} 
void vansh()
{
     static int x=1;
    printf(" %d\n", x);
    x=x+5;

}
#include<stdio.h>
void vansh();
int x=4;// global scope or variable i.e. extern storage class
void main ()
{
vansh();
vansh();
 vansh();
} 
void vansh()
{
    printf(" %d\n", x);
    x=x+5;

}
//reverse the numbers 8425 5248
#include<stdio.h>
int main (){
    int i,num;scanf("%d",&num);
    while (num!=0)
    {
        i=num%10;
        printf(" %d",i);
        num =num/10;
    } return 0;
}
*/
//adding the digits of a number
#include<stdio.h>
void main () 
{
    int num,i=0;
    scanf(" %d",num);
    while (num!=0)
    {
        i+=num%10
        printf("%d",i);
        num=num/10;
    }
    printf(" sum is :%d\n",i);
}

