#include "grpc_header.h"

char *get_req_head(requests_header_t req)
{
	switch(req)
	{
		case GRPC_REQUEST_HEADERS:
			return "request-headers";
			break;
		case GRPC_CALL_DEFINITION:
			return "call-definition";
			break;
		case GRPC_METHOD:
			return ":method";
			break;
		case GRPC_SCHEME:
			return ":scheme";
			break;
		case GRPC_PATH:
			return ":path";
			break;
		case GRPC_SERVICE_NAME:
			return "service-name";
			break;
		case GRPC_AUTHORITY:
			return ":authority";
			break;
		case GRPC_TE:
			return "te";
			break;
		case GRPC_TIMEOUT:
			return "timeout";
			break;
		case GRPC_CONTENT_TYPE:
			return "content-type";
			break;
		case GRPC_CONTENT_CODING:
			return "content-coding";
			break;
		case GRPC_MESSAGE_ENCODING:
			return "message-encoding";
			break;
		case GRPC_MESSAGE_ACCEPT_ENCODING:
			return "message-accept-encoding";
			break;
		case GRPC_USER_AGENT:
			return "user-agent";
			break;
		case GRPC_MESSAGE_TYPE:
			return "message-type";
			break;
		case GRPC_CUSTOM_METADATA:
			return "custom-metadata";
			break;
		case GRPC_HEADER_NAME:
			return "header-name";
			break;
		case GRPC_ASCII_VALUE:
			return "ascii-value";
			break;
		default:
			return "";
			break;
	}
}