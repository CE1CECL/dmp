
##############################################################################
#   BIOSMP : BIOS Update Tool                    
##############################################################################
  Requirements: 
 1. Operating System: MS-DOS 
 
 Usage: BiosMP  [options]
 options list:
    -r              Display MAC address from Flash.
    -p bios_file    Program BIOS with MAC address form config file(BiosMP.cfg).
    -s bios_file xx:xx:xx:xx:xx:xx
                    Program BIOS with specified MAC address.
    -m xx:xx:xx:xx:xx:xx
                    Update MAC address.
    -u bios_file    Update BIOS and keep original MAC address.
    -w              Program MAC address form config file(BiosMP.cfg).    
 
 

 Config File: (Used by paramter -p bios_file)
  File Name = BiosMP.cfg 
  Format:
   1. MAC start address: at 1th line, first 17 characters, format: xx:xx:xx:xx:xx:xx
   2. MAC end address at 2th line, first 17 characters, format: xx:xx:xx:xx:xx:xx
  Action:
   After prgraming BIOS sucessfully, MAC start address incremented by 1.
   If programing BIOS fail, MAC start address will not be changed. 
 



