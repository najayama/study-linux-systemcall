#include <setjmp.h>
#include <stdio.h>

static jmp_buf env;

static void
f1(void)
{
        longjmp(env, 1);
}

int main(void)
{
    switch (setjmp(env)) {
        case 0:
            puts("jump to f1\n");
            f1();
            break;

        case 1:
            break;
        }
    return 0;
}


