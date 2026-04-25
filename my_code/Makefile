CPP = g++
EXE = gettypeinfo operators if-else-switch

executables: ${EXE}

gettypeinfo: gettypeinfo.cpp
	$(CPP) -o gettypeinfo.out gettypeinfo.cpp

operators: operators.cpp
	$(CPP) -o operators.out operators.cpp

if-else-switch: if-else-switch.cpp
	$(CPP) -o if-else-switch.out if-else-switch.cpp

clean:
	rm -f *.o *.out