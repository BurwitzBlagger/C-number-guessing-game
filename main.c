#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv)
{
int hidNum = 0, curNum =0 ;
const int MAX= 100, MIN=1;
srand(time(NULL));
hidNum = (rand() % (MAX - MIN + 1) + MIN);
do
{
printf("What is the hidden number ? ");
scanf("%d",&curNum);
if (hidNum>curNum)
printf("Try a bigger number !\n");
else if (hidNum<curNum)
printf("Try a smaller number !\n");
else
printf("You found the hidden number !!!\n");
} while (hidNum!=curNum);
system ("PAUSE");
return 0;
}
