#include <p24FJ128GB206.h>
#include "config.h"
#include "common.h"
#include "ui.h"
#include "timer.h"

int16_t main(void) {
    init_clock();
    init_ui();
    init_timer();

    led_on(&led1);
    timer_setPeriod(&timer2, 0.5);
    timer_start(&timer2);

    while (1) {

        if (timer_flag(&timer2)) { 
            timer_lower(&timer2)
            
            if (!sw_read(&sw2)){
        		led_write(led_write(&led3, led_read(&led2));
        		led_write(led_write(&led2, led_read(&led1));
        		led_write(led_write(&led1, led_read(&led3));
            }
            else{
            	led_toggle(&led1);
            	if(!sw_read(&sw2)) {
            		led_toggle(&led2)
           	 	}
       	 	}	

            
           
        }
    }
}

