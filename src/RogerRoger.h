#ifndef ROGERROGER_H_
#define ROGERROGER_H_

typedef struct
{
	uint8_t position;					/* 1 bit, Specifies the position of the motor in the robot.
											This parameter can be a number:
												0x00 - left motor;
												0x01 - right motor;
												*/

	uint8_t direction; 					/* 2 bits, Specifies the current working direction of the motor.
											This parameter can be a number:
												0x00 - motor is not working,
												0x01 - motor is working forward,
												0x02 - motor is working backwards
												*/

	uint8_t speed_delta_int;			/* 8 bits, Specifies the integer-part of the increase of speed for ramp usage [rpm^2].
											This parameter can be a number between 0x00 and 0xFF (0x00 -> 0rpm^2, 0xFF -> 255rpm^2)
											*/

	uint8_t speed_delta_frac;			/* 8 bits, Specifies the fractional-part of the increase of speed for ramp usage [%].
											This parameter can be a number between 0x00 and 0xFF (0x00 -> 0%, 0xFF -> 100%)
											*/


	uint8_t set_speed_rpm_int; 			/* 8 bits, Specifies the integer-part of the set speed of the motor in [rpm].
											This parameter can be a number between 0x00 and 0xFF (0x00 -> 0rpm, 0xFF -> 255rpm)
											*/

	uint8_t set_speed_rpm_frac; 		/* 8 bits, Specifies the fractional-part of the set speed of the motor in [%].
											This parameter can be a number between 0x00 and 0xFF (0x00 -> 0%, 0xFF -> 100%)
											*/

	uint8_t set_speed_per_int; 			/* 8 bits, Specifies the integer-part of the set speed of the motor in [%].
											This parameter can be a number between 0x00 and 0xFF (0x00 -> 0%, 0xFF -> 100%)
											*/

	uint8_t set_speed_per_int; 			/* 8 bits, Specifies the fractional-part of the set speed of the motor in [%].
											This parameter can be a number between 0x00 and 0xFF (0x00 -> 0%, 0xFF -> 100%)
											*/

	uint8_t current_speed_rpm_int; 		/* 8 Bits, Specifies the integer-part of the current measured speed of the motor in [rpm].
											This parameter can be a number between 0x00 and 0xFF (0x00 -> 0rpm, 0xFF -> 255rpm)
											*/

	uint8_t current_speed_per_frac; 	/* 8 Bits, Specifies the fractional-part of the current measured speed of the motor [%].
											This parameter can be a number between 0x00 and 0xFF (0x00 -> 0%, 0xFF -> 100%)
											*/

}MOTOR;

typedef struct
{
	uint8_t driving;					/* 1 bit, Specifies whether robot is moving.
											This parameter can be a number:
												0x00 - robot is not moving,
												0x01 - robot is moving
												*/

	uint8_t driving_mode_1;				/* 4 bits, Specifies the current working mode of the robot.
											This parameter can be a number:
												0x00 - robot is driving forward,
												0x01 - robot is turning left,
												0x02 - robot is turning right,
												0x03 - robot is driving backwards
												*/

	uint8_t driving_mode_2;				/* 4 bits, Specifies the current working mode of the robot.
											This parameter can be a number:
												0x00 - robot is driving forward,
												0x01 - robot is turning left,
												0x02 - robot is turning right,
												0x03 - robot is driving backwards
												*/

	uint8_t speed_delta_int;			/* 8 bits, Specifies the integer-part of the increase of speed for ramp usage [m/s^2].
											This parameter can be a number between 0x00 and 0xFF (0x00 -> 0m/s^2, 0xFF -> 255m/s^2)
											*/

	uint8_t speed_delta_frac;			/* 8 bits, Specifies the fractional-part of the increase of speed for ramp usage [%].
											This parameter can be a number between 0x00 and 0xFF (0x00 -> 0%, 0xFF -> 100%)
											*/

	uint8_t set_speed_ms_int; 			/* 8 Bits, Specifies the integer-part of the set speed of the robot in [m/s].
											This parameter can be a number between 0x00 and 0xFF (0x00 -> 0m/s, 0xFF -> 255m/s)
											*/

	uint8_t set_speed_ms_frac; 			/* 8 Bits, Specifies the fractional-part of the set speed of the robot in [%].
											This parameter can be a number between 0x00 and 0xFF (0x00 -> 0%, 0xFF -> 100%)
											*/

	uint8_t set_speed_per_int; 			/* 8 Bits, Specifies the integer-part of the set speed of the robot in [%].
											This parameter can be a number between 0x00 and 0xFF (0x00 -> 0%, 0xFF -> 100%)
											*/

	uint8_t set_speed_per_frac; 		/* 8 Bits, Specifies the fractional-part of the set speed of the robot in [%].
											This parameter can be a number between 0x00 and 0xFF (0x00 -> 0%, 0xFF -> 100%)
											*/

	uint8_t current_speed_ms_int; 		/* 8 Bits, Specifies the integer-part of the current measured speed of the robot in [m/s].
											This parameter can be a number between 0x00 and 0xFF (0x00 -> 0m/s, 0xFF -> 255m/s)
											*/

	uint8_t current_speed_ms_frac; 		/* 8 Bits, Specifies the fractional-part of the current measured speed of the robot in [%].
											This parameter can be a number between 0x00 and 0xFF (0x00 -> 0%, 0xFF -> 100%)
											*/

	uint8_t current_speed_per_int; 		/* 8 Bits, Specifies the integer-part of the current measured speed of the robot in [%].
											This parameter can be a number between 0x00 and 0xFF (0x00 -> 0%, 0xFF -> 100%)
											*/

	uint8_t current_speed_per_frac; 	/* 8 Bits, Specifies the fractional-part of the current measured speed of the robot in [%].
											This parameter can be a number between 0x00 and 0xFF (0x00 -> 0%, 0xFF -> 100%)
											*/

}ROBOT;


#endif /* ROGERROGER_H_ */
