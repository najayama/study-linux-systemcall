#include <unistd.h>

int main(){
    write(STDOUT_FILENO, "Hello world!", 6);
    return 0;
}
    
