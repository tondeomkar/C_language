#include<stdio.h>

struct Demo
{
 int i;
 int j;
 float f;
};
union Hello
{
 int i;
 int j;
 float f;
};
int main()
{
 struct Demo dobj;
 union Hello hobj;
 
 dobj.i = 11;
 dobj.j = 21;

 hobj.i = 11;
 hobj.j = 21;

 printf("%d\n",sizeof(dobj));
 printf("%d\n",sizeof(hobj));

 printf("%d\n",dobj.i);
 printf("%d\n",dobj.j);
 printf("%d\n",hobj.i);
 printf("%d\n",hobj.j);

return 0;
}