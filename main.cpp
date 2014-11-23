#include "mbed.h"
#include "ultrasonic.h"

//time_t startTime;
//Timer t;
//float s;
 void dist(int distance)
{
    //float new_s;
    //new_s = t.read ();
    //printf("I think %f s passed, current time %f, %f\r\n", (double)(new_s-s), new_s, s);
    //printf("distance updated %d\r\n", distance);
    //printf("RTC clock says %d\r\n", (time(NULL)-startTime));
}
void startTimer()
{
    //s = t.read();
    //printf("timer started \r\n");
    //startTime = time(NULL);
}
void trigger()
{
    //printf("trigger sent\r\n");
}

ultrasonic mu(D8, D9, 1, 2, &dist, &trigger, &startTimer);

int main()
{
    //t.start();
    mu.startUpdates();
    while(1)
    {
        //Do something else
        //printf("doing something");
        if(mu.isUpdated())
        {
            printf("Distance = %d\r\n", mu.getCurrentDistance());
        }
    }
}
