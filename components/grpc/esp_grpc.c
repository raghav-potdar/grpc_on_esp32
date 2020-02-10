#include "esp_grpc.h"

#include "grpc_header.h"

void no_req_head(int req)
{
	 nghttp2_nv *nva = (nghttp2_nv *)malloc(req * sizeof(nghttp2_nv));     //Not sure check again
     printf("%d\n",req);  //delete later
}

int header_index=0;

//Use this function to declare headers for http2 communication
//refer to https://github.com/grpc/grpc/blob/master/doc/PROTOCOL-HTTP2.md
void add_headers(requests_header_t req , char *head){
	//add headers to users list of headers
    char *req_head = get_req_head(req);
    
	nva[header_index] = "SH2LIB_MAKE_NV("+*req_head+"," +*head+ ")";
    printf(*nva); //delete later
    printf("\n");   //delete later
	header_index=header_index+1;
}

// grpc_init()

// int sh2lib_do_post(struct sh2lib_handle *handle, char *data, size_t len, uint32_t *data_flags)
// {
	
// }

void grpc_connect(char *GRPC_HTTP2_SERVER_URI){
	/* HTTP2: one connection multiple requests. Do the TLS/TCP connection first */
    printf("Connecting to server\n");
    struct sh2lib_handle hd;
    if (sh2lib_connect(&hd, GRPC_HTTP2_SERVER_URI) != 0) {
        printf("Failed to connect\n");
        return;
    }
    printf("Connection done\n");
}

// grpc_create_request()

// perform()