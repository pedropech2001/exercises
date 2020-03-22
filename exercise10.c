#include <stdio.h>
int main(int argc, char *states[])
{
 int i = 0;
 // go through each string in argv
 // why am I skipping argv[0]?
 for(i = 1; i < argc; i++) {
// in this part i change the code to put the variables in the armunts line
 printf("arg %d: %s\n", i, states[i]);
 }
 // let's make our own array of strings
 //char *states[] = {"California", "Oregon","Washington", "Texas"};
 int num_states = 4;
/* the for have 3 parts (all separate by commas) the firts where you put the variable and its value,
the second where you put a condition and the last where you put what happens if the condition its ture*/
 for(i = 0; i < num_states; i++) {
 printf("state %d: %s\n", i, states[i]);
 }
 return 0;
 }

