#include <stdio.h>

int main(){
 
    FILE *fp;
    char str[1024];
 
    fp = fopen("konnichiha.txt","r");
 
    if(fp == NULL){
        printf("ふぁいるないよ\n");
        return -1;
    }
 
    while((fgets(str,256,fp)) !=NULL){
        printf("%s", str);
    }
    fclose(fp);
 
    return 0;
}
