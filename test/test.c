#include <stdio.h>
#include "test.h"
#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow){
    pypyrun();
    printf("successfully completed");

    return 0;
}