#include <stdio.h>
#include <unistd.h>
#include <sys/socket.h>
#include <stdlib.h>



int main() {
     int sockfd  =  socket(AF_INET,SOCK_STREAM,0);

    	if(sockfd <0){
		perror("Socket Error");

	}

     while(1){

	       printf("Waiting for request ....\n");
               sleep(1);
	
	}

return 0;
}
