#include<stdio.h>
   int fact(int x);
   int main()
   {
       int p,q,i,a=0;
       scanf("%d",&p);
       scanf("%d",&q);
       for(i=0;i<=q;i++)
       {
           if(i%2==0)
           {
               a=a+(fact(p)/(fact(p-i)*fact(i)));
           }
       }
       printf("%d",a);
       return 0;
   }
   int fact(int x)
   {
       int i,f=1;
       if(x==0)
       {
           return(f);
       }
       else
       {
           for(i=1;i<=x;i++)
           {
               f=f*i;
           }
       }
       return(f);
   }
