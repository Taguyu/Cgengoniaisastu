#include <stdio.h>

int main(){
 
    FILE *kon;
    char str[1024];

    kon = fopen("aisatsu.txt","r");

        if(kon == NULL){
        printf("ふぁいるないよ\n");
        return -1;
    }
 
    while((fgets(str,256,kon)) !=NULL){
        printf("%s",str);
        printf("↓\n");

    }
    fclose(kon);

    FILE *nichi;
    char cat[1024];

    nichi = fopen("aisatsu.txt","w+");

     fgets(cat,256,nichi);
     printf("よろしくね、C言語！",cat);

    fclose(nichi);
    return 0;
}