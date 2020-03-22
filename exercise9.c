
#include <stdio.h>
int main(int argc, char *argv[])
{
 int numbers[4] = {0};
 char name[4] = {'a'};

 printf("numbers: %d %d %d %d\n",numbers[0], numbers[1],numbers[2], numbers[3]);

 printf("name each: %c %c %c %c\n",name[0], name[1],name[2], name[3]);

 printf("name: %s\n", name);

/*if you put chars in an int you will receive their values in the ascii code*/
 numbers[0] = 'a';
 numbers[1] = 'B';
 numbers[2] = 'A';
 numbers[3] = 4;
printf("numbers: %d %d %d %d\n",numbers[0], numbers[1],numbers[2], numbers[3]);
/*when you put a number like a char you will receive its value in the ascii*/


 name[0] = 66;
 name[1] = 50;
 name[2] = 65;
 name[3] = 37;


 printf("numbers: %d %d %d %d\n",numbers[0], numbers[1],numbers[2], numbers[3]);

 printf("name each: %c %c %c %c\n",name[0], name[1],name[2], name[3]);

 // print the name like a string

 printf("name: %s\n", name);

 // another way to use name

 char *another = "Zed";
 printf("another: %s\n", another);
 printf("another each: %c %c %c %c\n",another[0], another[1], another[2], another[3]);
 return 0;
}

