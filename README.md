# Arduino Projects

A collection of Arduino sketches organized by complexity and topic,
built with Arduino UNO.

## Categories

### Basics

Fundamental C++ and Arduino concepts.

| Sketch | Description |
|--------|-------------|
| [variables](./basics/variables/) | Data types: int, float, boolean, char |
| [operadores](./basics/operadores/) | Arithmetic operators |
| [operadores-logicos](./basics/operadores-logicos/) | Logical operators: AND, OR, NOT |

### Digital Output

LED control and visual output.

| Sketch | Description |
|--------|-------------|
| [leds](./digital-output/leds/) | Basic LED alternation |
| [control-leds-serial](./digital-output/control-leds-serial/) | LED control via Serial Monitor |
| [led-rgb](./digital-output/led-rgb/) | RGB LED cycling with for loop |
| [semaforo](./digital-output/semaforo/) | Traffic light with RGB LED |

### Digital Input

Button reading and interaction.

| Sketch | Description |
|--------|-------------|
| [button-count](./digital-input/button-count/) | Button press counter via Serial |
| [led-control-button](./digital-input/led-control-button/) | LEDs + buzzer controlled by buttons |

### Analog

Sensors and analog signal reading.

| Sketch | Description |
|--------|-------------|
| [potenciometro-rgb](./analog/potenciometro-rgb/) | Potentiometer controlling RGB LED color |
| [sensor-luz-led](./analog/sensor-luz-led/) | Light sensor activating LED |
| [sensor-luz-buzzer](./analog/sensor-luz-buzzer/) | Light sensor triggering buzzer |

### Displays

External display modules.
| Sketch | Description |
|--------|-------------|
| [display-7-segmentos](./displays/display-7-segmentos/) | 7-segment display showing digits 0–9 |

### Combined

Multi-component sketches combining input, output, and control flow.

| Sketch | Description |
|--------|-------------|
| [switch-case-buzzer-rgb](./combined/switch-case-buzzer-rgb/) | Potentiometer driving buzzer + RGB via switch-case |

### Projects

More complete, standalone projects.

| Project | Description |
|---------|-------------|
| [snake](./projects/snake/) | Snake game on Serial Monitor with two buttons |
| [expo-temperatura](./projects/expo-temperatura/) | DS18B20 temperature sensor controlling a light |
| [hedwigs-theme](./projects/hedwigs-theme/) | Hedwig's Theme (Harry Potter) with piezo buzzer |

## Hardware

All sketches use **Arduino UNO** unless noted otherwise.

## Author

HikkizZ — [GitHub](https://github.com/HikkizZ)
