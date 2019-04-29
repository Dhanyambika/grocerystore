#include<stdio.h>
void view(void) {
	char c;
	FILE *fp;
	if(fp==NULL)
		printf("Error in creating file");
	fp=fopen("grocery.txt","r+");
	while((c=fgetc(fp))!=EOF)
	printf("%c",c);
	fclose(fp);
	getchar();
}
