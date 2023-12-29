#include <stdio.h>
#include <stdlib.h>

void count_from_stdin(void){
    int ch = 0;
    int word_ctr=0, ch_ctr=0;
    while((ch=getchar()) != EOF){
        if (ch!='\n')
            ch_ctr++;
        else
            word_ctr++;
    }
    printf("The number of words are: %d\n", word_ctr);
    printf("The number of characters are: %d\n", ch_ctr);
}

void count_from_file(char *ptr){
    int word_ctr=0, ch_ctr=0, ch=0;
    FILE *fp = fopen(ptr, "r");
    while((ch=getc(fp)) != EOF){
        if (ch!='\n')
            ch_ctr++;
        else
            word_ctr++;
    }
    printf("The number of words are: %d\n", word_ctr);
    printf("The number of characters are: %d\n", ch_ctr);
}

int main(int argc, char *argv[]){
    if (argc==1){
        printf("Reading from stdin.\nType your input terminated by cntrl-D to simulate EOF.\n");
        count_from_stdin();
    }
    else{
        printf("Reading from: %s\n",argv[1]);
        count_from_file(argv[1]);
    }

    return 0;
}