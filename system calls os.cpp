#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
  pid_t p;
  printf("before fork\n");
  if(p==0)
  {
    printf("I am child having id %d\n",getpid());
    printf("My parent's id is %d\n",getpid());
  }
else
 {
   printf("My child's id is %d\n",p);
   printf("I am parent having id %d\n",getpid());
 }
  return 0;
}
