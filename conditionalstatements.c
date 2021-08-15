#include<stdio.h>
int main()
{
  int choice,num;
  printf("Enter a number between 1-5: \n");
  scanf("%d", &choice);
  switch(choice)
  {
    case 1:
      printf("Food item- Pizza\n Price- Rs.239");
      break;
    case 2:
      printf("Food item- Burger\n Price- Rs.129");
      break;
    case 3:
      printf("Food item- Pasta\n Price- Rs.179");
      break;
    case 4:
      printf("Food item- French fries\n Price- Rs.99");
      break;
    case 5:
      printf("Food item- Pizza\n Price- Rs.149");
      break;
   }
 return 0;
}
