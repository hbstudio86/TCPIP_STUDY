//HW적인 연결과 SW적인 연결이 신경쓸 필요가 있다
//전자는 인터넷이 연결되어 있기때문에 신경쓸 필요가 없고
//후자는 OS에서 Socket이라는 것을 제공해준다.
//
//우선 소켓통신에 해당하는 헤더 파일이다
//sys/socket.h
//이것을 include하고
//소켓을 생성하는 함수를 실행한다.
//int socket(int domain, int type, int protocol);
//이후 IP와 Port번호라는 소켓 주소 정보를 할당 받아야 한다.
//int bind(int sockfd, struct sockaddr * myaddr, socklen_t addrlen);
//통신이 가능한 상태로 변경을 해야 한다.
//int listen(int sockfd, int backlog);
//성공시 0, 실패시 -1을 리턴한다.
//통신연결 요청이 들어오면, 수락을 해야 한다.
//int accept(int sockfd, struct sockaddr * addr, socklen_t * addrlen);
//성공시 파일 디스크립터, 실패시 -1 반환
//
//정리하자면
//1단계 소켓 생성 socket 함수
//2단계 주소 할당 bind 함수
//3단계 통신 연결 listen 함수
//4단계 통신 수락 accept 함수
//
// 연결을 허락하는 프로그램을 서버라고 한다
// 
//전화거는 소켓의 구현
//연결요청을 하는 것을 클라이언트 소케이라고 한다.
// 통신연결을 요청하는 함수
// int connect(int sockfd, struct sockaddr *serv_addr, socklen_t addrlen);
// 클라이언트는 소켓 생성과 connect를 통한 연결 요청 밖에 없다.
// 
// 
//
#include <WinSock2.h>
//그전에 winsock을 참조해야 한다. ws2_32.lib
//int WSAStartup(WORD wVersionRequested, LPWSADATA lpWSAData);
// 성공시 0, 실패시 0이 아닌 에러코드값 반환
// 첫 번째 매개변수 : 프로그래머가 사용할 윈속의 버전정보
// 버전의 경우 상위 8비트가 부버전, 하위 8비트가 주버전을 의미한다.
// 쉽게 사용하기 위해 makeword(주버전, 부버전) 매크로를 이용하면 좋다
// 두 번째 매개변수 : WSADATA라는 구조체 변수의 주소 값 전달

//int WSACleanup(void);
//성공시 0, 실패시 socket_error 반환
//할당된 윈속 라이브러리는 위도우 운영체제에 반환, 주로 프로그램 종료 전에 실행 한다.
//int main(int argc, char* argv[]) {
//	WSADATA wsaData;
//  if (WSAStartup (MAKEWORD(2,2), &wsaData) != 0)
//		ErrorHandling("WSAStartup() error!");
//	return 0;
//}

//리눅스 소켓 주요 함수들은
//socket bind listen accept 인데 각각 대응되는 윈속 함수들은
//SOCKET socket(int af, int type, int protocol);
//int bind(SOCKET s, const struct sockaddr * name, int namelen);
//int listen(SOCKET s, int backlog);
//SOCKET accept(SOCKET s, struct sockaddr * addr, int * addrlen);
//int connect(SOCKET s, const struct sockaddr * name, int namelen);
//int closesocket(SOCKET s);