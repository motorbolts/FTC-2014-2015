#pragma config(Hubs,  S1, HTMotor,  HTMotor,  HTMotor,  HTMotor)
#pragma config(Hubs,  S2, HTServo,  none,     none,     none)
#pragma config(Sensor, S3,     IR,             sensorHiTechnicIRSeeker1200)
#pragma config(Motor,  motorA,           ,             tmotorNXT, openLoop)
#pragma config(Motor,  motorB,           ,             tmotorNXT, openLoop)
#pragma config(Motor,  motorC,           ,             tmotorNXT, openLoop)
#pragma config(Motor,  mtr_S1_C1_1,     rightwheelA,   tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C1_2,     leftwheelA,    tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_1,     rightwheelB,   tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_2,     leftwheelB,    tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C3_1,     lift1,         tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_2,     lift2,         tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C4_1,     collector,     tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C4_2,     swing,         tmotorTetrix, openLoop)
#pragma config(Servo,  srvo_S2_C1_1,    hitch,                tServoStandard)
#pragma config(Servo,  srvo_S2_C1_2,    servo2,               tServoNone)
#pragma config(Servo,  srvo_S2_C1_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S2_C1_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S2_C1_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S2_C1_6,    servo6,               tServoNone)



task main()
{

	void driveforward(int motorspeed, int time)
	{

		motor(leftwheelA) = motorspeed;
		motor(leftwheelB) = motorspeed;
		motor(rightwheelA) = motorspeed;
		motor(rightwheelB) = motorspeed;

		wait1Msec(time);

	}


}
