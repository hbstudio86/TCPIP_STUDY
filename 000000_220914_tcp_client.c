#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include <stdio.h>
#include <WinSock2.h>
#include <stdlib.h>

void error_Handilng(char* message);

int main(int argc, char * argv[]) {
	int sock;
	struct sockaddr_in serv_addr;
	char message[30];
	int str_len = 0;
	int idx = 0, read_len = 0;
	
	if (argc != 3) {

	}
}