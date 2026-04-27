#include <stdint.h>
#include <stdbool.h>
#include "C:/ti/TivaWare_C_Series-2.2.0.295/inc/hw_memmap.h"
#include "C:/ti/TivaWare_C_Series-2.2.0.295/driverlib/debug.h"
#include "C:/ti/TivaWare_C_Series-2.2.0.295/driverlib/gpio.h"
#include "C:/ti/TivaWare_C_Series-2.2.0.295/driverlib/sysctl.h"

int main(void) {
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOP);
    GPIOPinTypeGPIOOutput(GPIO_PORTP_BASE, GPIO_PIN_0);
    uint32_t tickTock;
    while(1) {
        GPIOPinWrite(GPIO_PORTP_BASE, GPIO_PIN_0, GPIO_PIN_0);
        for (tickTock = 0; tickTock < 200000; tickTock++){}
        GPIOPinWrite(GPIO_PORTP_BASE, GPIO_PIN_0, 0x0);
        for (tickTock = 0; tickTock < 200000; tickTock++){}
    }
}
