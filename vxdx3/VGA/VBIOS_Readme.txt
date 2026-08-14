
Below are the steps to generate a VBIOS, combine with System BIOS then update on the Vortex86DX3 board. 

1, Use the VGABiosEditor to adjust the LCD timing.  ( VBIOS is a 32KB .rom file)

2, Use the MMTOOL, load the system BIOS ( system BIOS is 512KB) and replace by the new VBIOS.

After you have the new system BIOS, you can use the AMIBCP to modify the default BIOS setting if necessary. 

3, Use Anybios to update the new system BIOS on Vortex86DX3 Board. 