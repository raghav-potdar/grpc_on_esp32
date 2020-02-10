#pragma once
#include "include/sh2lib/sh2lib.h"

// #include ".pb.h"

//implementation of gRPC carried over HTTP2 framing
typedef enum requests_header{
	GRPC_REQUEST_HEADERS,
	GRPC_CALL_DEFINITION,
	GRPC_METHOD,					//NECESSARY
	GRPC_SCHEME,					//NECESSARY
	GRPC_PATH,						//NECESSARY
	GRPC_SERVICE_NAME,
	GRPC_AUTHORITY,					//NECESSARY
	GRPC_TE,
	GRPC_TIMEOUT,
	GRPC_CONTENT_TYPE,				//NECESSARY
	GRPC_CONTENT_CODING,
	GRPC_MESSAGE_ENCODING,			//NECESSARY
	GRPC_MESSAGE_ACCEPT_ENCODING,	//NECESSARY
	GRPC_USER_AGENT,				//NECESSARY
	GRPC_MESSAGE_TYPE,
	GRPC_CUSTOM_METADATA,
	GRPC_HEADER_NAME,
	GRPC_ASCII_VALUE
} requests_header_t;

typedef enum responses_header{
	GRPC_RESPONSE,
	GRPC_RESPONSE_HEADERS,
	GRPC_TRAILERS_ONLY,
	GRPC_TRAILERS,
	GRPC_HTTP_STATUS,
	GRPC_STATUS,
	GRPC_STATUS_MESSAGE,
	GRPC_PERCENT_ENCODED,
	GRPC_PERCENT_BYTE_UNENCODED,
	GRPC_PERCENT_BYTE_ENCODED
} responses_header_t;

struct nghttp2_nv *nva;

//Default: 9 Request Header
//To change use this function 
void no_req_head(int req);

//Use this function to declare headers for http2 communication
void add_headers(requests_header_t req, char *head);

void grpc_init();

void grpc_connect(char *GRPC_HTTP2_SERVER_URI);

void grpc_create_request();

void perform();