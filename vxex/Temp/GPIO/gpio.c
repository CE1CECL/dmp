/*
This sample code is used to tell the users how to use GPIO.
In this sample code, we only test port 0 bit 0.
*/

#include <sys/io.h>
#include <stdio.h>

//GPIO base address is set in SB Function 0 offset 62h
#define GPIO_BASE_ADDR 0x4000 

void GPIO_INIT(void);

void main(void)
{

    iopl(3); //let user can acces io in user space.
    char yn;

    //init GPIO before test
    GPIO_INIT();

    //direction register of port 0,set the direction of bit 0 to output
    outb(0x1,0x6000);

    printf("GPIO test assign port0 bit0 = 1 (y/n)?");
    scanf("%s",&yn);
    
    //data register of port 0, set the data of bit 0 =1
    outb(0x1,0x5000);

    printf("change status from 1 to 0:(y/n)?");
    scanf("%s",&yn);

    //data register of port 0, set the data of bit 0 =1
    outb(0x0,0x5000);
}


/*
Init GPIO, 
include set IO base address 0x4000, 
port 0-9 Decode enable, (here only test port 0)
the direction register and the data register of port 0.
*/
void GPIO_INIT(void)
{
    unsigned long u32;
    //set GPIO IO base address = 0x4000 at SB Function 0 offset 62h
    outl(0x80003860,0xCF8);
    u32 = inl(0xCFC);
    u32 = u32 | (( GPIO_BASE_ADDR | 0x1 ) << 16);
    outl(0x80003860,0xCF8);
    outl(u32,0xCFC);

    //GPIO port 0-9 decode enable
    outl(0x3FF, GPIO_BASE_ADDR); 
   
    //set port 0 : 0x6000 : data Register,0x5000 : direction register   
    outl(0x60005000, GPIO_BASE_ADDR | 0x4); 

}
