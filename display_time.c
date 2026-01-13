#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    struct tm *currentTime;

    // Get current time
    time(&t);

    // Convert to local time
    currentTime = localtime(&t);

    // Print time in HH:MM:SS format
    printf("Current Time: %02d:%02d:%02d\n",
           currentTime->tm_hour,
           currentTime->tm_min,
           currentTime->tm_sec);

    return 0;
}
