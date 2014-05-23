#include "nb_socket.h"

#ifdef _WINDOWS
static SOCKET s_sockfd;
#else
#include <sys/socket.h>
static int s_sockfd;
#endif

 int nbs_connect(const char* host)
 {
    s_sockfd = socket(AP_INET, SOCK_STREAM, 0);
    if(s_sockfd < 0){
        return -1;
    }
    
    return 0;
 }
 
 unsigned char* nbs_get_pack()
 {
    return 0;
 }
 
 int nbs_send(const unsigned char* data)
 {
    return 0;
 }