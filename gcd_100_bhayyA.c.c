#include<stdio.h>
void main()
{
     int  n,m,b,s,ss;
     printf("enter 2 sankhyalu whose ga sA bhA is  needed:");
     scanf("%d%d",&n,&m);
     if (n<m)
     {
         b=m;
         m=n;
         n=b;
     }
     {
        s=n%m;
         if (s==0)
          printf("\n GCD=%d",m);
        else if (m%s==0)
          printf("\n GCD=%d",s);
          else
          {
              ss=m%s;
              if (s%ss==0)
               printf("\n GCD=%d",ss);
          }
     }
     
}
