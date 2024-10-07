# Executable file to create and its dependencies
prog : driver_phase_1.o Container.o
	g++ -std=c++11 -o prog driver_phase_1.o Container.o

# File dependencies
driver_phase_1.o : Container.h
	g++ -std=c++11 -c driver_phase_1.cpp

Container.o : Container.h
	g++ -std=c++11 -c Container.cpp

# Files to remove
clean:
	rm -f driver_phase_1.o Container.o prog
