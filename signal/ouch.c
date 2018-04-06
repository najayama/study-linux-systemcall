#include <signal.h>
#include <stdio.h>
#include <unistd.h>

static void 
sigHandler(int sig)
{
    printf("Ouch!\n");
}

int 
main(int argc, char *argv[]){
    int j;

    if(signal(SIGINT, sigHandler) == SIG_ERR)
        return 0;

    for(j = 0; ; j++){
        printf("%d", j);
        sleep(3);
    }
}
