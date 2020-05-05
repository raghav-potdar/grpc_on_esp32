#include <string.h>
#include <stdlib.h>
#include <sys/time.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_wifi.h"
#include "esp_event.h"
#include "lwip/apps/sntp.h"
#include "esp_system.h"
#include "nvs_flash.h"
#include "tcpip_adapter.h"

#include "../components/grpc/esp_grpc.h"

/* The HTTP/2 server to connect to */
#define HTTP2_SERVER_URI  "https://http2.golang.org"
/* A GET request that keeps streaming current time every second */
#define HTTP2_STREAMING_GET_PATH  "/clockstream"
/* A PUT request that echoes whatever we had sent to it */
#define HTTP2_PUT_PATH            "/ECHO"

// esp_err_t event_handler(void *ctx, system_event_t *event)
// {
//     return ESP_OK;
// }

void app_main()
{
    // ESP_ERROR_CHECK( nvs_flash_init() );
    // tcpip_adapter_init();
    // ESP_ERROR_CHECK(esp_event_loop_create_default());

    //ESP_ERROR_CHECK(grpc_connect());

    // requests_header_t req = GRPC_METHOD;

    no_req_head(20);

    add_headers(GRPC_METHOD,"post");
    
    printf("Restarting now.\n");
    fflush(stdout);
    esp_restart();
}