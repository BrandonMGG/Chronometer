#include "sys/alt_irq.h"
#include "altera_avalon_pio_regs.h"
#include "altera_avalon_timer_regs.h"
#include "system.h"

static unsigned leds = 0;
static int digit=0;
static int display=0;

static void timer_isr(void *context)
{
(void) context;
	leds = leds << 1 | (IORD_ALTERA_AVALON_PIO_DATA(SWITCH_BASE) & 1);
	IOWR_ALTERA_AVALON_PIO_DATA(PIO_0_BASE, leds);
	display = displayShow(digit);
	digit+=1;

	IOWR_ALTERA_AVALON_PIO_DATA(SEVEN_SEG2_BASE, display);
	IOWR_ALTERA_AVALON_TIMER_STATUS(TIMER_0_BASE, 0);
}
int displayShow(int counter){
	if (digit == 0) {
	    display = 64;
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
	} else if (digit == 9) {
	    display = 24;
	    digit=-1;
	}
	return display;
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
