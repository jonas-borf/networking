#include <sys/types.h>
#include <sys/socket.h>

int socket(int domain, int type, int protocol);

int s;
struct addrinfo hints, *res;

getaddrinfo("www.example.com", "http", &hints, &res);

s = socket(res->ai_family, res->ai_socktype, res->ai_protocol);
