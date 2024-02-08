/* 
* TimedPulseGenerator.h
*
* Created: 2/7/2024 12:39:13 PM
* Author: Alex
*/


#include <Adafruit_MMC56x3.h>
#include "MMC56SensorReader.h"

extern "C" {
};

using namespace MagneticSensor;

MMC56SensorReader::MMC56SensorReader() {
}

MMC56SensorReader::~MMC56SensorReader() {
}

void MMC56SensorReader::initSensor() {
	
}

void MMC56SensorReader::shutdownSensor() {

}

void MMC56SensorReader::calibrateSensor() {

}

void MMC56SensorReader::getSensorReading(SensorReading* readingReceiver) {

}

SensorReading* MMC56SensorReader::getSensorReading() {
	return 0;
}