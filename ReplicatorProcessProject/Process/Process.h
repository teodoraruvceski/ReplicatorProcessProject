#ifndef PROCESS_H_   
#define PROCESS_H_
#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include "conio.h"
//#include <errno.h>
#include <winsock.h>
//#define _WINSOCK_DEPRECATED_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#pragma comment (lib, "Ws2_32.lib")
#pragma comment (lib, "Mswsock.lib")
#pragma comment (lib, "AdvApi32.lib")
#pragma warning(disable:4996) 
#pragma pack(1)



#define SERVER_IP_ADDRESS "127.0.0.1"
#define SERVER_PORT 27000
#define BUFFER_SIZE 256

struct process {
    char ipAddr[15];
    int port;
    int id;
};


void RegisterService(int serviceId);

void SendData(int serviceId, void* data, int dataSize);

void RecieveData(void* data, int dataSize);

//void StartProcess();

#endif
