#ifndef Calibration_h
#define Calibration_h

#define SAMPLE_LENGTH 10000
#define show_peak 3
#define peak_candidate 100

// float ref_position[2];

void calibration_setup(int value);
void calibration();
void EEPROM_setup();

#endif 