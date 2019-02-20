/** https://www.youtube.com/playlist?list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_ 
	^= BEST SOURCE FOR LEARNING C SPECIFIC MEMORY ADDRESSING 
	YT channel: mycodeschool
**/
#include <stdio.h>
int add(int a, int b){
	return a+b;
}
int sub(int a, int b){
	return a-b;
}
int mul(int a, int b){
	return a*b;
}
int main(void) {
	int (*p)(int,int);
	p = add;
	p = sub;
	p = &mul;
	printf("%d",(*p)(2,3));
	return 0;
}

/*
#include <stdio.h>
void greet(){
	printf("Hello %s\n","name");
}
int main(int argv, char* argc){
	int (*ptr)();
	ptr = greet; // This and the line below this is COOL! (Because JS uses this <3)
	ptr();
	return 0;
}
*/

/*
#include <stdio.h>
void greet(char* name){
	printf("Hello %s\n",name);
}
int main(int argv, char* argc){
	int (*ptr)(char*);
	ptr = greet; // This and the line below this is COOL! (Because JS uses this <3)
	ptr("Aditya");
	return 0;
}
*/
