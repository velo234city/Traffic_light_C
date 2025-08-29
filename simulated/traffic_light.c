#include<stdio.h>
#include<unistd.h>   // For sleep cycle function in seconds.

int main()
{
    int times=5; // No of times to repeat the cycles.

    for (int i=0;i<times;i++)
    { printf("Red light is on.\n");
        sleep(5); // Wait for 5 seconds.


      printf("Yellow light is on.\n");
        sleep(2); // Wait for 2 seconds.


      printf("Green light is on.\n");
        sleep(5); //Wait for 5 seconds.


      printf("------------------\n");  // Separator between cycles.

          }

     printf("Traffic Light Simulation is finished.\n");
     return 0;

    }
