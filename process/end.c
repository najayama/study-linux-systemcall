#include <stdio.h>

extern char etext, edata, end;

int main(){

    printf("%p\n%p\n%p\n", &etext, &edata, &end);
}
