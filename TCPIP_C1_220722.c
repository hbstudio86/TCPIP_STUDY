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
