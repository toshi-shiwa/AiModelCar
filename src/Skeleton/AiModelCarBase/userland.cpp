/*
 * userland.cpp
 *
 * Created: 2014/11/04 22:36:01
 *  Author: sazae7
 */ 
#include <stdlib.h>
#include <string.h>

#include <userland.h>


/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/
volatile static uint8_t sRunning = 0;

/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/
void initialize_userland(void)
{
	return;	
}

/*---------------------------------------------------------------------------*/
void updateUserland(void)
{
	return;
}


/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/
uint8_t onSensorInterrupt(void *sensor)
{
	uint8_t duty = 100;

	if (sRunning) {
		duty =  80;	
	}
	else {
		duty =  0;	
	}

	return duty;
}

/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/
void onTimerInterrupt(uint32_t tick)
{

}


/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/
void onSw0Pressed(void)
{
	sRunning = 1 - sRunning;
	gpio_output_toggle(nDEBUG_LED0_PORT, nDEBUG_LED0_PIN);
}

/*---------------------------------------------------------------------------*/
void onSw0Repeat(void)
{
	
}

/*---------------------------------------------------------------------------*/
void onSw0Released(void)
{

}


/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/
void onSw1Pressed(void)
{

}

/*---------------------------------------------------------------------------*/
void onSw1Repeat(void)
{
	
}

/*---------------------------------------------------------------------------*/
void onSw1Released(void)
{

}

/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/
void onSw2Pressed(void)
{

}

/*---------------------------------------------------------------------------*/
void onSw2Repeat(void)
{

}

/*---------------------------------------------------------------------------*/
void onSw2Released(void)
{

}