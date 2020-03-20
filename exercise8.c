
#include <stdio.h>
int main(int argc, char *argv[])
{
 int areas[] = {10, 12, 13, 14, 245, 13, 12, 13, 54, 24, 34, 23, 59 ,85};
 char name[] = "pedro";
 char full_name[] = {//here I change the array elemnts that also change the amount of char´s
 'P', 'e', 'd','r','o', ' ', 'L', '.',' ','P', 'e', 'c', 'h',' ', 'M','a','r','q','u','e','z', '\0'
 };
 // WARNING: On some systems you may have to change the
 // %ld in this code to a %u since it will use unsigned ints
 printf("The size of an int: %ld\n", sizeof(int));
 printf("The size of areas (int[]): %ld\n",
 sizeof(areas));
 printf("The number of ints in areas: %ld\n",
 sizeof(areas) / sizeof(int));
 printf("The first area is %d, the 2nd %d.\n",
 areas[0], areas[1]);
 printf("The size of a char: %ld\n", sizeof(char));
 printf("The size of name (char[]): %ld\n",
 sizeof(name));
 printf("The number of chars: %ld\n",
 sizeof(name) / sizeof(char));
 printf("The size of full_name (char[]): %ld\n",
 sizeof(full_name));
 printf("The number of chars: %ld\n",
 sizeof(full_name) / sizeof(char));
 printf("name=\"%s\" and full_name=\"%s\"\n",
 name, full_name);
 return 0;
}
