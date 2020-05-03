idf_component_register(SRCS "grpc_header.c" "esp_grpc.c"
                    INCLUDE_DIRS .
                    REQUIRES nghttp
                    PRIV_REQUIRES lwip esp-tls)