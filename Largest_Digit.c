#include<stdio.h>
#include<string.h>

int main()
{
  int x,res,R=0,temp;
  scanf("%d",&x);
  while(x>0)
  {
      res=x%10;
      x=x/10;
      temp=x%10;
      if(res>temp)
      {
          if(res>R)
          {
              R=res;
          }
      }
      else
      {
          if(temp>R)
          {
            R=temp;
          }
      }
      
  }
  printf("%d",R); 
    return 0;
}