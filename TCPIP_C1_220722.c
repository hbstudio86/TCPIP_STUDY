//HW���� ����� SW���� ������ �Ű澵 �ʿ䰡 �ִ�
//���ڴ� ���ͳ��� ����Ǿ� �ֱ⶧���� �Ű澵 �ʿ䰡 ����
//���ڴ� OS���� Socket�̶�� ���� �������ش�.
//
//�켱 ������ſ� �ش��ϴ� ��� �����̴�
//sys/socket.h
//�̰��� include�ϰ�
//������ �����ϴ� �Լ��� �����Ѵ�.
//int socket(int domain, int type, int protocol);
//���� IP�� Port��ȣ��� ���� �ּ� ������ �Ҵ� �޾ƾ� �Ѵ�.
//int bind(int sockfd, struct sockaddr * myaddr, socklen_t addrlen);
//����� ������ ���·� ������ �ؾ� �Ѵ�.
//int listen(int sockfd, int backlog);
//������ 0, ���н� -1�� �����Ѵ�.
//��ſ��� ��û�� ������, ������ �ؾ� �Ѵ�.
//int accept(int sockfd, struct sockaddr * addr, socklen_t * addrlen);
//������ ���� ��ũ����, ���н� -1 ��ȯ
//
//�������ڸ�
//1�ܰ� ���� ���� socket �Լ�
//2�ܰ� �ּ� �Ҵ� bind �Լ�
//3�ܰ� ��� ���� listen �Լ�
//4�ܰ� ��� ���� accept �Լ�
//
// ������ ����ϴ� ���α׷��� ������� �Ѵ�
// 
//��ȭ�Ŵ� ������ ����
//�����û�� �ϴ� ���� Ŭ���̾�Ʈ �����̶�� �Ѵ�.
// ��ſ����� ��û�ϴ� �Լ�
// int connect(int sockfd, struct sockaddr *serv_addr, socklen_t addrlen);
// Ŭ���̾�Ʈ�� ���� ������ connect�� ���� ���� ��û �ۿ� ����.
// 
// 
//
#include <WinSock2.h>
//������ winsock�� �����ؾ� �Ѵ�. ws2_32.lib
//int WSAStartup(WORD wVersionRequested, LPWSADATA lpWSAData);
// ������ 0, ���н� 0�� �ƴ� �����ڵ尪 ��ȯ
// ù ��° �Ű����� : ���α׷��Ӱ� ����� ������ ��������
// ������ ��� ���� 8��Ʈ�� �ι���, ���� 8��Ʈ�� �ֹ����� �ǹ��Ѵ�.
// ���� ����ϱ� ���� makeword(�ֹ���, �ι���) ��ũ�θ� �̿��ϸ� ����
// �� ��° �Ű����� : WSADATA��� ����ü ������ �ּ� �� ����

//int WSACleanup(void);
//������ 0, ���н� socket_error ��ȯ
//�Ҵ�� ���� ���̺귯���� ������ �ü���� ��ȯ, �ַ� ���α׷� ���� ���� ���� �Ѵ�.
//int main(int argc, char* argv[]) {
//	WSADATA wsaData;
//  if (WSAStartup (MAKEWORD(2,2), &wsaData) != 0)
//		ErrorHandling("WSAStartup() error!");
//	return 0;
//}

//������ ���� �ֿ� �Լ�����
//socket bind listen accept �ε� ���� �����Ǵ� ���� �Լ�����
//SOCKET socket(int af, int type, int protocol);
//int bind(SOCKET s, const struct sockaddr * name, int namelen);
//int listen(SOCKET s, int backlog);
//SOCKET accept(SOCKET s, struct sockaddr * addr, int * addrlen);
//int connect(SOCKET s, const struct sockaddr * name, int namelen);
//int closesocket(SOCKET s);