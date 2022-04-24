#include<stdio.h>
int main(){
FILE *fp;
fp=fopen("one.txt","w");
if(fp==NULL)
    printf("not done");
char *p;
printf("Enter a string to be written to the file\n");
gets(p);
fputs(p,fp);

fclose(fp);
}
