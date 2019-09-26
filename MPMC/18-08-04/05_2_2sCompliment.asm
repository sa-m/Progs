;2s Compliment of 16bit
LXI H, 1234H
MOV A,H
CMA
MOV H,A
MOV A,L
CMA
MOV L,A
INX H
HLT