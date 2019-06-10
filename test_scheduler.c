#include <stdio.h>
#define FIFOSO_POLICY = 1

int main(int argc, char *argv[]){
    if (argc!=2){
        printf("Missing pid argument");
        return 0;
    }
    
    int pid = argv[1];
    if (sched_setscheduler(pid, FIFOSO_POLICY)) printf("Scheduling policy of process with ID  %i set to %i", pid, FIFOSO_POLICY);
    else perror("Error: ");
    
    return 0;
}
