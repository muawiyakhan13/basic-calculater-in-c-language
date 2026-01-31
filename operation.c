#include <stdio.h>
#include <stdlib.h>

int main()
{

char opperater;

 float a,b;
 printf("enter your a & b : ");
 scanf("%f%c%f",&a,&opperater,&b);
 

 switch (opperater)
 {
 case '+':printf("The sum is %f\n",a+b);

    break;
    case '-':printf("The substratiction is %f\n",a-b);
     break;
      case '*':printf("The multiplication is %f\n",a*b); 
      break;
      case '%':printf("The remender is %f\n",a%b);
      break;
     case '/':printf("The division is %f\n",a/b);
    break;
   default: printf("invilid operater");
 }
  return 0;
}
