#include <stdio.h>
int main(int argc, char *argv[])
 {
 int i = 0;
 if(argc == 1) {
 printf("You only have one argument. You need to put at least one but less than 4 :).\n");
 } else if(argc > 1 && argc < 4) {
 printf("Here's your arguments:\n");
 for(i = 0; i < argc; i++) {
 printf("%s ", argv[i]);
 }
 printf("\n");
 } else {
 printf("You have too many arguments. You need less than 4.\n");
 }
 return 0;
 }

