#define LED_PIN 2   // Built-in LED on most ESP32 boards

void blinkTask(void *parameter)
{
  while (true)
  {
    digitalWrite(LED_PIN, HIGH);
    vTaskDelay(pdMS_TO_TICKS(500));

    digitalWrite(LED_PIN, LOW);
    vTaskDelay(pdMS_TO_TICKS(500));
  }
}

void setup()
{
  pinMode(LED_PIN, OUTPUT);

  xTaskCreate(
    blinkTask,      // Task function
    "Blink Task",   // Task name
    1024,           // Stack size
    NULL,           // Parameter
    1,              // Priority
    NULL            // Task handle
  );
}

void loop()
{
  // Empty
}