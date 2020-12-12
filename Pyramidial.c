#include<stdio.h>

void pypart(int n)
{
  int i=0,j=0,k=0;
  for(i=0;i<n; i++)
  {
      for(j=0;j<(n-i-1);j++)
      {
          k=0;
          printf(" ");
          k++;
         
      }
      while(k<n)
      {
          printf(" * ");
      }
  
  }
printf(" \n");

}
int main()
{
    int n=5;
    pypart(n);
    return 0;
}
