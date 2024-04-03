#include <stdio.h>
#include "http/http_server.c"

void app_main(void) {
    app_init();
}

void app_init() {
    nvs_flash_init();
    system_init();

    // When beeper-mode enabled:
    wifi_init();
    xTaskCreate(&http_server, "http_server", 2048, NULL, 5, NULL);
}

void display_menu(){
    
}