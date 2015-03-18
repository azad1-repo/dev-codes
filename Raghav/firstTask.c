#include <stdio.h>
#include <stdlib.h>

#include "FreeRTOS.h"
#include "task.h"

#define mainDELAY_LOOP_COUNT 10000

void vPrintString(const char *pcTaskName)
{
    puts(pcTaskName) ;
}

void vTask1( void *pvParameters )
{
    const char *pcTaskName = "Task 1 is running\r\n";
    volatile unsigned long ul;
    /* As per most tasks, this task is implemented in an infinite loop. */
    for( ;; ) {
        /* Print out the name of this task. */
        vPrintString( pcTaskName );
        /* Delay for a period. */
        for( ul = 0; ul < mainDELAY_LOOP_COUNT; ul++ ) {
        /* This loop is just a very crude delay implementation. There is
        nothing to do in here. Later examples will replace this crude
        loop with a proper delay/sleep function. */
        }
    }
}

void vTask2( void *pvParameters )
{
    const char *pcTaskName = "Task 2 is running\r\n";
    volatile unsigned long ul;
    /* As per most tasks, this task is implemented in an infinite loop. */
    for( ;; ) {
        /* Print out the name of this task. */
        vPrintString( pcTaskName );
        /* Delay for a period. */
        for( ul = 0; ul < mainDELAY_LOOP_COUNT; ul++ ) {
        /* This loop is just a very crude delay implementation. There is
        nothing to do in here. Later examples will replace this crude
        loop with a proper delay/sleep function. */
        }
    }
}

int main( void )
{
    xTaskCreate( vTask1, "Task 1", 1000, NULL, 1, NULL );
    xTaskCreate( vTask2, "Task 2", 1000, NULL, 1, NULL );
    /* Start the scheduler so the tasks start executing. */
    vTaskStartScheduler();
    for( ;; );
    return 0 ;
}
