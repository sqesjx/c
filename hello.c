/*Пирамидка*/
#include <stdio.h>

main()
{
  int x;
  printf("Input integer 1 to 5\n");
  scanf("%d", &x);

  if (x==1)
  printf("#");

  if (x==2)
  printf("#\n##\n");

  if (x==3)
  printf("#\n##\n###\n");

  if (x==4)
  printf("#\n##\n###\n####\n");

  if (x==5)
  printf("#\n##\n###\n####\n#####\n");

  return 0;
}
