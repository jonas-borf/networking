char ip4[INET_ADDRSTRLEN];
struct sockaddr_in sa;

inet_ntop(AF_INET, &(sa.sin_addr), ip4, INET_ADDRSTRLEN);

printf("The IPv4 address is %s\n", ip4);

// IPv6

char ip6[INET6_ADDRSTRLEN];
struct sockaddr_in6 sa6;

inet_ntop(AF_INET, &(sa6.sin6_addr), ip6, INET6_ADDRSTRLEN);

printf("The IPv6 address is %s\n", ip6);
