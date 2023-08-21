#include "sys/alt_irq.h"
#include "altera_avalon_pio_regs.h"
#include "altera_avalon_timer_regs.h"
#include "system.h"

static unsigned leds = 0;
static int digit=0;
static int display=0;
static int display2=64;
static int display3=0;
static int display4=0;
static int display5=0;
static int display6=0;
static int digit2=0;
static int digit3=0;
static int digit4=0;
static int digit5=0;
static int digit6=0;

static void timer_isr(void *context)
{
(void) context;
	leds = leds << 1 | (IORD_ALTERA_AVALON_PIO_DATA(SWITCH_BASE) & 1);
	IOWR_ALTERA_AVALON_PIO_DATA(PIO_0_BASE, leds);

 if((IORD_ALTERA_AVALON_PIO_DATA(SWITCH_BASE) & 1) && !(IORD_ALTERA_AVALON_PIO_DATA(SWITCH2_BASE) & 1) ){
	 display = displayShow(digit);
	 digit+=1;
	 IOWR_ALTERA_AVALON_PIO_DATA(SEVEN_SEG0_BASE, display);
	 IOWR_ALTERA_AVALON_PIO_DATA(SEVEN_SEG1_BASE, display2);
 }
 else if(!(IORD_ALTERA_AVALON_PIO_DATA(SWITCH_BASE) & 1) && (IORD_ALTERA_AVALON_PIO_DATA(SWITCH2_BASE) & 1) ){
	 display = displayShow(digit);
	 digit+=1;
 }else if((IORD_ALTERA_AVALON_PIO_DATA(SWITCH_BASE) & 1) && (IORD_ALTERA_AVALON_PIO_DATA(SWITCH2_BASE) & 1) ){
	 display = displayShow(digit);
	 digit+=1;
	 IOWR_ALTERA_AVALON_PIO_DATA(SEVEN_SEG0_BASE, display);
	 IOWR_ALTERA_AVALON_PIO_DATA(SEVEN_SEG1_BASE, display2);
 }
	IOWR_ALTERA_AVALON_PIO_DATA(SEVEN_SEG4_BASE, display5);
	IOWR_ALTERA_AVALON_PIO_DATA(SEVEN_SEG5_BASE, display6);
	IOWR_ALTERA_AVALON_TIMER_STATUS(TIMER_0_BASE, 0);
}
int displayShow(int counter){
	if (digit == 0) {
	    display = 64;
	    display2 = displayShow2(digit2);
	} else if (digit == 1) {
	    display = 121;
	} else if (digit == 2) {
	    display = 36;
	} else if (digit == 3) {
	    display = 48;
	} else if (digit == 4) {
	    display = 25;
	} else if (digit == 5) {
	    display = 18;
	} else if (digit == 6) {
	    display = 2;
	} else if (digit == 7) {
	    display = 120;
	} else if (digit == 8) {
	    display = 0;
	} else if (digit == 9 ) {
	    display = 24;
	    digit=-1;

	    digit2+=1;
	}
	return display;
}
int displayShow2(int counter){
		if (digit2 == 0) {
		    display2 = 64;
		    display3 = displayShow3(digit3);
		} else if (digit2 == 1) {
		    display2 = 121;
		} else if (digit2 == 2) {
		    display2 = 36;
		} else if (digit2 == 3) {
		    display2 = 48;
		} else if (digit2 == 4) {
		    display2 = 25;
		} else if (digit2 == 5) {
		    display2 = 18;
		} else if (digit2 == 6) {
		    display2 = 2;
		} else if (digit2 == 7) {
		    display2 = 120;
		} else if (digit2 == 8) {
		    display2 = 0;
		} else if (digit2 == 9 ) {
		    display2 = 24;
		    if((IORD_ALTERA_AVALON_PIO_DATA(SWITCH2_BASE) & 1)){
		    	 digit3+=1;
		    }
		    digit2=-1;
		}
		return display2;
}
int displayShow3(int counter){
	if((IORD_ALTERA_AVALON_PIO_DATA(SWITCH2_BASE) & 1)){
		if (digit3 == 0) {
			display3 = 64;
			display4 = displayShow4(digit4);
		} else if (digit3 == 1) {
			display3 = 121;
		} else if (digit3 == 2) {
			display3 = 36;
		} else if (digit3 == 3) {
			display3 = 48;
		} else if (digit3 == 4) {
			display3 = 25;
		} else if (digit3 == 5) {
			display3 = 18;
		} else if (digit3 == 6) {
			display3 = 2;
		} else if (digit3 == 7) {
			display3 = 120;
		} else if (digit3 == 8) {
			display3 = 0;
		} else if (digit3 == 9 ) {
			display3 = 24;
			digit3=-1;

			digit4+=1;
		}
	}else {
		return display3;
	}
	IOWR_ALTERA_AVALON_PIO_DATA(SEVEN_SEG2_BASE, display3);
	IOWR_ALTERA_AVALON_PIO_DATA(SEVEN_SEG3_BASE, display4);
	return display3;
}
int displayShow4(int counter){
	if (digit4 == 0) {
		    display4 = 64;
		    display5 = displayShow5(digit5);
		} else if (digit4 == 1) {
			display4 = 121;
		} else if (digit4 == 2) {
			display4 = 36;
		} else if (digit4 == 3) {
			display4 = 48;
		} else if (digit4 == 4) {
			display4 = 25;
		} else if (digit4 == 5) {
			display4 = 18;
			digit5+=1;
		    digit4=-1;
		}
		return display4;
}
int displayShow5(int counter){
	if (digit5 == 0) {
	    display5 = 64;
	    display6 = displayShow6(digit6);
	} else if (digit5 == 1) {
		display5 = 121;
	} else if (digit5 == 2) {
		display5 = 36;
	} else if (digit5 == 3) {
		display5 = 48;
	} else if (digit5 == 4) {
		display5 = 25;
	} else if (digit5 == 5) {
		display5 = 18;
	} else if (digit5 == 6) {
		display5 = 2;
	} else if (digit5 == 7) {
		display5 = 120;
	} else if (digit5 == 8) {
		display5 = 0;
	} else if (digit5 == 9 ) {
		display5 = 24;
	    digit5=-1;

	    digit6+=1;
	}
	return display5;
}
int displayShow6(int counter){
	if (digit6 == 0) {
		    display6 = 64;
		} else if (digit6 == 1) {
		    display6 = 121;
		} else if (digit6 == 2) {
		    display6 = 36;
		} else if (digit6 == 3) {
		    display6 = 48;
		} else if (digit6 == 4) {
		    display6 = 25;
		} else if (digit6 == 5) {
		    display6 = 18;
		    digit6=-1;
		}
		return display6;
}
int main(){
	alt_ic_isr_register(
		TIMER_0_IRQ_INTERRUPT_CONTROLLER_ID,
		TIMER_0_IRQ,
		timer_isr,
		NULL,
		NULL);
	IOWR_ALTERA_AVALON_TIMER_CONTROL(
		TIMER_0_BASE,
		ALTERA_AVALON_TIMER_CONTROL_ITO_MSK | ALTERA_AVALON_TIMER_CONTROL_CONT_MSK);
	while (1);
}
