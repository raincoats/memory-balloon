#include <stdio.h>
#include <stdlib.h>


int main(void){
	int i = 0;
	int *grinch;
	char heart[] = "<3";

	puts("smashing mem...");
	while (i < (sizeof(heart) * 40 * 0xDEAD)) {
		grinch = malloc(0xDEAD + 666 * sizeof(heart));
		i++;
	}
	//puts("memory is clear. now it's segfault time!");
	//system("killall -SEGV malloc");

	puts("memory is free and now i must die");
	free(grinch);

	return sizeof(heart);
}