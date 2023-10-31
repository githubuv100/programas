#include <process.h>
#include <time.h>
#include <stdio.h>
#include <Windows.h> 

void task1(void*);

int main(int argc, char* argv[]) {
    int threadNr;
    int nucleos = 20;

    for (int i = 0; i < nucleos; i++) {
        _beginthread(task1, 0, &threadNr);
    }

    getchar();
    return 0;
}

void task1(void* arg) {
    while (1) {
        clock_t wake_up = clock() + 50;
        while (clock() < wake_up) {
        }
        Sleep(50);
    }
}
