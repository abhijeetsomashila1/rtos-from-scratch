# ESP-IDF Setup and Basic Commands

## What is ESP-IDF?

ESP-IDF (Espressif IoT Development Framework) is the official development framework for ESP32 microcontrollers.

It provides:

* FreeRTOS
* Hardware drivers
* Wi-Fi and Bluetooth stacks
* Build tools
* Debugging tools

Think of ESP-IDF as the software layer that allows us to interact with ESP32 hardware.

```text
Application Code
       ↓
   ESP-IDF
       ↓
   FreeRTOS
       ↓
ESP32 Hardware
```

---

# Installing ESP-IDF

## VS Code Extension 

The easiest way to install ESP-IDF is through the official VS Code extension.

### Step 1: Install VS Code

Download and install Visual Studio Code.

### Step 2: Install ESP-IDF Extension

Open VS Code.

Go to:

```text
Extensions → Search → ESP-IDF
```

Install:

```text
Espressif IDF
```

---

### Step 3: Configure ESP-IDF

Open the Command Palette:

```text
Ctrl + Shift + P
```

Run:

```text
ESP-IDF: Configure ESP-IDF Extension
```

Choose:

```text
Express Installation
```

The extension will automatically install:

* ESP-IDF
* Python
* Toolchain
* CMake
* Ninja
* Required dependencies

---

### Step 4: Verify Installation

Open a terminal and run:

```bash
idf.py --version
```

Example output:

```text
ESP-IDF v5.x.x
```

If a version number appears, ESP-IDF is installed correctly.

---

# Creating a New Project

Open Command Palette:

```text
Ctrl + Shift + P
```

Run:

```text
ESP-IDF: Create Project
```

Choose:

```text
hello_world
```

Select:

* Project location
* Project name
* ESP32 target

Open the generated project.

---

# Typical ESP-IDF Project Structure

```text
my_project/
│
├── main/
│   └── main.c
│
├── CMakeLists.txt
├── sdkconfig
└── build/
```

---

## Important Files

### main.c

Contains application code.

Example:

```c
void app_main(void)
{
    printf("Hello World\n");
}
```

---

### sdkconfig

Stores project configuration.

Examples:

* CPU frequency
* Flash size
* Logging settings

Generated automatically.

---

### build/

Contains compiled firmware files.

Generated after building.

Do not edit manually.

---

# Core ESP-IDF Commands

These are the commands used daily.

---

## Build Project

```bash
idf.py build
```

Purpose:

```text
Source Code
     ↓
Compile
     ↓
Firmware
```

Compiles the project but does not upload it.

---

## Flash Firmware

```bash
idf.py flash
```

Purpose:

```text
Firmware
    ↓
ESP32 Flash Memory
```

Uploads firmware to the ESP32.

---

## Monitor Serial Output

```bash
idf.py monitor
```

Purpose:

```text
ESP32 Logs
     ↓
Terminal
```

Displays serial output from the board.

Useful for debugging.

---

## Flash and Monitor

```bash
idf.py flash monitor
```

Most commonly used command.

Workflow:

```text
Build
 ↓
Flash
 ↓
Open Serial Monitor
```

---

## Clean Build Files

```bash
idf.py clean
```

Removes temporary build artifacts.

---

## Full Clean

```bash
idf.py fullclean
```

Removes the entire build directory.

Useful when strange build errors occur.

---

# Logging

Instead of using:

```c
printf("Hello");
```

ESP-IDF provides logging macros.

Example:

```c
ESP_LOGI("MAIN", "Hello World");
```

Output:

```text
I (123) MAIN: Hello World
```

Advantages:

* Easier debugging
* Log levels
* Better formatting

---

# Common Workflow

Every time I work on a project:

### 1. Write code

```text
main/main.c
```

### 2. Build

```bash
idf.py build
```

### 3. Flash

```bash
idf.py flash
```

### 4. Monitor

```bash
idf.py monitor
```

### 5. Exit Monitor

Press:

```text
Ctrl + ]
```

---

# Useful Shortcuts

### Open Command Palette

```text
Ctrl + Shift + P
```

### Create Project

```text
ESP-IDF: Create Project
```

### Set Target

```bash
idf.py set-target esp32
```

Example:

```bash
idf.py set-target esp32
```

Other targets:

```text
esp32
esp32s3
esp32c3
esp32c6
```

---

# My Mental Model

When using ESP-IDF:

```text
Write Code
     ↓
Build
     ↓
Flash
     ↓
Monitor
     ↓
Debug
     ↓
Repeat
```

Everything else in ESP-IDF builds on this workflow.

---

# Commands to Memorize

```bash
idf.py build
idf.py flash
idf.py monitor
idf.py flash monitor
idf.py clean
idf.py fullclean
idf.py set-target esp32
```


