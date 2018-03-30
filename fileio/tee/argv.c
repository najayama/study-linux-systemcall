#include <stdio.h>

int main(int argc, char *argv[]){
    int i;

    printf("argc:%d argv:%p\n", argc, argv);

    for(i=0;i<argc;i++){
        printf("%d: %s\n", i, argv[i]);
    }

    for(i=0;i<argc;i++){
        printf("%d: %p\n", i, &argv[i]);
    }

    return 0;
}

