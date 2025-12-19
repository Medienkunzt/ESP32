# ESP32 IDF Project Collection

A collection of ESP32 projects based on the Espressif IoT Development Framework (ESP-IDF).

## Prerequisites

- [ESP-IDF](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/) (Version 4.4 or higher recommended)
- Python 3.7 or higher
- ESP32 Development Board

## Installation

1. Install and configure ESP-IDF:

   ```bash
   git clone --recursive https://github.com/espressif/esp-idf.git
   cd esp-idf
   ./install.sh
   ```

2. Activate ESP-IDF environment:
   ```bash
   . $HOME/esp/esp-idf/export.sh
   ```

## Project Structure

Each project in this repository follows this structure:

```
project-name/
├── main/
│   ├── CMakeLists.txt
│   └── main.c
├── CMakeLists.txt
└── README.md
```

## Build and Flash

For each project:

```bash
cd project-name
idf.py set-target esp32
idf.py build
idf.py -p PORT flash monitor
```

Replace `PORT` with your serial port (e.g., `/dev/ttyUSB0` on Linux or `COM3` on Windows).

## Projects

_Projects will be listed here as they are added._

## Useful Commands

- `idf.py menuconfig` - Configure project settings
- `idf.py build` - Compile the project
- `idf.py flash` - Flash firmware to ESP32
- `idf.py monitor` - Open serial monitor
- `idf.py clean` - Clean build directory
- `idf.py fullclean` - Complete cleanup including sdkconfig

## Resources

- [ESP-IDF Documentation](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/)
- [ESP-IDF Examples](https://github.com/espressif/esp-idf/tree/master/examples)
- [ESP32 Datasheet](https://www.espressif.com/sites/default/files/documentation/esp32_datasheet_en.pdf)

## License

See LICENSE file in each project.
