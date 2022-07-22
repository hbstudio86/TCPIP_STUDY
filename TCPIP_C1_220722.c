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
