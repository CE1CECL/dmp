
Note: 2015/5/14
- PIN AB29 <SPEAKER> is also the strap pin for internal Ethernet PHY Power-on (low) and Power-down. Please ensure this pin should pull-low  if the internal Ethernet is used, this pin can not tri-state otherwise the internet Ethernet might become test-mode. 

-PIN U4 <G_STRAP[3]> and W5 <G_STRAP[4]> are the Power-down Enable  strap pins to control the internal DSPs (DVP0 and DVP1, for Video decode). Please Pull-High on those two pins to power-down the DSPs, otherwise it will increase the power consumption about 1 Watt. 

- PIN K11,L10 and L11:  Those 3 pins are strap pins for BMS,JTAG Enable and Flash Select. For detail, please refer to Vortex86DX3 Fast Sheet. 

-PIN AB30 and AD30 are the clock output of 25MHz and 24MHz from Vortex86DX3.  Those two pins are not suggested to use because of the accuracy affected by long-term jitter. 

-PIN A2, PCIRST, is 1.8V reset pin, please add the level ship IC if your PCIe device need 3.3V reset.

-The internal Ethernet controller clock source 25MHz is from PCIe Clock Generator 100MHz / 4 =25MHz, if the Clock Generator you choiced is with Spetrum function, it might affect the accuracy of 25MHz then make the Ethernet controller won't work.  Please choice the Clock Generator without spectrum function or disable as default. 




 