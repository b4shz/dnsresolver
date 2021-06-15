#include <stdio.h>
#include <netdb.h>
#include <arpa/inet.h>

int main(int argc, char *argv[]){

    printf("[λ] DNSResolver in C\n");
    printf("\n");

    char *target;
    target = argv[1];
    struct hostent host;

    host=gethostbyname(target);
    printf("%s ==> IP: %s \n", target, inet_ntoa(((struct in_addr * )host->h_addr)));

    return 0;
}
