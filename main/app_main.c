#include <string.h>
#include <stdlib.h>
// #include <sys/time.h>
// #include "freertos/FreeRTOS.h"
// #include "freertos/task.h"
// #include "freertos/event_groups.h"
// #include "esp_wifi.h"
// #include "esp_event.h"
// #include "lwip/apps/sntp.h"
// #include "esp_log.h"
// #include "esp_system.h"
// #include "nvs_flash.h"

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
    // nvs_flash_init();
    // tcpip_adapter_init();
    // ESP_ERROR_CHECK( esp_event_loop_init(event_handler, NULL) );
    // wifi_init_config_t cfg = WIFI_INIT_CONFIG_DEFAULT();
    // ESP_ERROR_CHECK( esp_wifi_init(&cfg) );
    // ESP_ERROR_CHECK( esp_wifi_set_storage(WIFI_STORAGE_RAM) );
    // ESP_ERROR_CHECK( esp_wifi_set_mode(WIFI_MODE_STA) );
    // wifi_config_t sta_config = {
    //     .sta = {
    //         .ssid = CONFIG_ESP_WIFI_SSID,
    //         .password = CONFIG_ESP_WIFI_PASSWORD,
    //         .bssid_set = false
    //     }
    // };
    // ESP_ERROR_CHECK( esp_wifi_set_config(WIFI_IF_STA, &sta_config) );
    // ESP_ERROR_CHECK( esp_wifi_start() );
    // ESP_ERROR_CHECK( esp_wifi_connect() );

    // ESP_ERROR_CHECK( nvs_flash_init() );

    // requests_header_t req = GRPC_METHOD;
    char *head1_val = "post";

    no_req_head(20);

    add_headers(GRPC_METHOD , head1_val);
}