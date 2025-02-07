This project reads temperature and humidity using a DHT11 sensor connected to an ESP microcontroller. The data is then printed to the Serial Monitor.

**Components Required**

-> ESP8266/ESP32 Board

-> DHT11 Temperature & Humidity Sensor

-> Jumper Wires

**Wiring Diagram**

**DHT11 Pin**|**ESP Pin**

VCC|3.3V

GND|GND

DATA|D2(GPIO4)

**Installation**

**1. Install the Arduino IDE**

Ensure you have the Arduino IDE installed on your system. You can download it from: Arduino Download Page

**2. Install the Required Libraries**

-> You need to install the DHT sensor library. Follow these steps:

-> Open Arduino IDE

-> Go to **Sketch → Include Library → Manage Libraries**

-> Search for DHT sensor library by Adafruit

-> Install it along with Adafruit Unified Sensor

**3. Upload the Code**

-> Connect your ESP board to your computer.

-> Open the Arduino IDE and select the correct board and port.

-> Upload the provided code to the ESP board.

**Code Explanation**

-> Initialize the DHT11 sensor using DHT dht(DHTPIN, DHTTYPE);.

-> Read humidity and temperature using dht.readHumidity() and dht.readTemperature().

-> Check for errors in sensor readings and print data to the serial monitor.

-> Delay of 2 seconds before the next reading.

**Expected Output**

When running the program, you should see something like this in the Serial Monitor:

DHT TEST SUCCESSFUL!

Humidity: 45.00%

Temperature: 26.00 degree Celsius.

If an error occurs, the message "Something is not working as intended" will be displayed.

**License**

This project is open-source and free to use.

**Contributing**

Feel free to fork this repository and submit pull requests to improve the code.

**Author: Mokshagna A**

