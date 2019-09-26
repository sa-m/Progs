;1s Compliment of 16bit
LXI H, 1234H
MOV A,H
CMA
MOV B,A
MOV A,L
CMA
MOV C,A
HLT