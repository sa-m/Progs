;Substraction of two 8-bit No.s(From Memory)
LDA 0002H
MOV B, A
LDA 0001H
SUB B
STA 0000H
HLT