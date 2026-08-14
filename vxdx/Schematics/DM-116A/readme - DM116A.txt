Please be noticed the pin A7 and D14 will be switched in final D version of Vortex86DX. 
This schematic is for the former version of Vortex86DX. So when you do the design, please do remember to switch the pin A7 and pin D14
The A7 is DQS0+ and D14 is DQS1- on the final D version of Vortex86DX. 

-------------------------
Please be noticed that the pin Y23 ( Speaker / Strap_EPS) must Pull-high or Pull-low even if you don't use the Speaker functions. 
There is no internal Pull-high/Pull-low on pin Y23. It will casued the unexpected problem on South Bridge if you don't Pull high/low. 
