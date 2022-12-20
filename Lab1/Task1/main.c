#include "sys/wait.h"
#include "stdio.h"
#include "unistd.h"

int main(int argc , char *argv[])
{
    int pid2 = fork();
    if(pid2 == 0)
    {
        int pid3 = fork();
        sleep(15);
    }
    else
    {
        int pid4 = fork();
        if(pid4 == 0)
        {
            int pid5 = fork();
            if(pid5 == 0)
            {
                sleep(15);
            }
            else
            {
		int pid6 = fork();
                sleep(15);
            }
        }
        else
        {
            int pid7 = fork();
            sleep(15);
        }
    }
    return 0;
}