#include <sys/stat.h>
#include <fcntl.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

/*This read 10 char from file and put them to stdout*/

int main(int argc, char *argv[])
{
    size_t len = 1;
    off_t offset;
    int fd, ap, j;
    char buf[3];

    ssize_t numRead, numWritten;
    
    if(argc < 2 || strcmp(argv[1], "--help") == 0){
        puts("./a.out filename ");
        return 0;
    }


    fd = open(argv[1], O_RDWR);

    if(fd == -1){
        puts("open");
    }

    for(j=0;j<10;j++){
        read(fd, buf, len);
        printf("%c", buf[0]);
    }

    return 0;
}




    
