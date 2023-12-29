#include <stdio.h>
#include <stdlib.h>

void convertCase(FILE *fp){
    FILE *tfp = NULL;
    int ch = 0;

    tfp = fopen("temp.txt","w");

    while ((ch=getc(fp)) != EOF){
        if (ch >= 97)
            ch = ch - 32;
        else if (ch >= 65)
            ch = ch + 32;
        
        putc(ch, tfp);
    }

    fclose(tfp);

}

int main(void){
    FILE *fp = NULL;
    char path[100];

    printf("Enter file to mod: ");
    scanf("%s", path);

    fp = fopen(path, "r"); //file to be modified

    convertCase(fp);

    fclose(fp);
}