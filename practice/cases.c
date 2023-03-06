#include <stdio.h>

int main()
{
int day;

printf("Enter day: ");
scanf("%d", &day);

switch(day)
{
case 1:
case 2:
case 3:
case 4:
case 5:
printf("Weekday \n");
break;

case 6:
case 7:
printf("Weekend \n");
break;

default:
printf("invalid day \n");
}
return 0;
}
