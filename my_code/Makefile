CPP = g++
EXE = gettypeinfo operators if_else_switch while_for

executables: ${EXE}

gettypeinfo: gettypeinfo.cpp
	$(CPP) -o gettypeinfo.out gettypeinfo.cpp

operators: operators.cpp
	$(CPP) -o operators.out operators.cpp

if_else_switch: if_else_switch.cpp
	$(CPP) -o if_else_switch.out if_else_switch.cpp

while_for: while_for.cpp

clean:
	rm -f *.o *.out