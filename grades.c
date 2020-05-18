#include<stdio.h>
int main()
{
  int m;
  printf("Enter the mark of the student");
  scanf("%d",&m);
  if(m>=85 && m<=100)
  printf("you have secured GRADE-A");
  else if (m>=70 && m<=84)
  printf("you have secured GRADE-B");
  else if(m>=55 && m<=69)
  printf("you have secured GRADE-C");
  else if(m>=40 && m<=54)
  printf("you have secured GRADE-D");
  else
  printf("you have secured GRADE-F");
}
  
  
  
