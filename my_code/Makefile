CPP = g++
EXE = gettypeinfo operators if_else_switch while_for break_continue_goto

executables: ${EXE}

gettypeinfo: gettypeinfo.cpp
	$(CPP) -o gettypeinfo.out gettypeinfo.cpp

operators: operators.cpp
	$(CPP) -o operators.out operators.cpp

if_else_switch: if_else_switch.cpp
	$(CPP) -o if_else_switch.out if_else_switch.cpp

while_for: while_for.cpp
	$(CPP) -o while_for.out while_for.cpp

break_continue_goto: break_continue_goto.cpp
	$(CPP) -o break_continue_goto.out break_continue_goto.cpp

clean:
	rm -f *.o *.out