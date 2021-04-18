#include <Arduino.h>
#include "ota.h"

void setup() {
    Serial.begin(115200);
	wifiResetOnButtonPressed();
    setupWifimanager();
    checkForUpdate();
	sleep(1 * 60e6);
}

void loop() {
}