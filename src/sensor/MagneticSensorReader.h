/* 
* TimedPulseGenerator.h
*
* Created: 2/7/2024 12:39:13 PM
* Author: Alex
*/


#ifndef __MAGNETIC_SENSOR_READER_H__
#define __MAGNETIC_SENSOR_READER_H__
#include <Arduino.h>

extern "C" {
};

namespace MagneticSensor {
	

class ReadingCallback {
private: 	
public:
	virtual void onMagneticReading(int* readingsReceiver) = 0;	
};

class MagneticSensorReader
{
//variables
public:
protected:
private:
	
//functions
public:
	static void initSensorReader(void);
	
	MagneticSensorReader();
	~MagneticSensorReader();
protected:
private:
	MagneticSensorReader( const MagneticSensorReader &c );
	MagneticSensorReader& operator=( const MagneticSensorReader &c );

}; //MagneticSensorReader

}
#endif //__MAGNETIC_SENSOR_READER_H__
