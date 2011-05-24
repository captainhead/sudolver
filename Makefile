EXENAME=solver.exe

all:
	g++ -o $(EXENAME) solver.cpp

clean:
	rm -rf $(EXENAME)
