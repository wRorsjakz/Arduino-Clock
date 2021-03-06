#pragma once

const char weekday_names[7][4] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };

/*
	struct to pass temperature & humidity information to LCDModule class for display in LCD screen
*/
typedef struct {
	float temperature;
	float relative_humidity;
} TempHumidityDataPoint;

/*
	struct to pass navigation instructions to alarm menu
*/
typedef struct {
	bool nextChar = false; // Move to next character on screen
	bool nextDigit = false; // Increment to next digit on screen
} AlarmMenuNavigation;

const char ALARM_ICON[] PROGMEM = {
	B00000,
	B00100,
	B01110,
	B01110,
	B01110,
	B11111,
	B00100,
	B00000
};

const uint8_t NO_OF_POSITIONS PROGMEM = 10; // NUMBER OF 2 ELEMENT ARRAYS IN CURSOR_POSITION ARRAY BELOW!!!!
const uint8_t CURSOR_POSITION[][2] = {
	{5,0}, {6,0}, {8,0}, {9,0}, {5,1}, {6,1}, {8,1}, {9,1}, {13,1}, {14,1}
};
