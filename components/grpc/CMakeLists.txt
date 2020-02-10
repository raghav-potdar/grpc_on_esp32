idf_component_register(SRCS "esp_grpc.c"
                    INCLUDE_DIRS .
                    REQUIRES nghttp
                    PRIV_REQUIRES lwip esp-tls)