CXX = gcc
Main: Main.o detMatrix.o trMatrix.o basics.o *.h
	$(CXX) $(CXXFLAGS) bin/Main.o bin/trMatrix.o bin/detMatrix.o bin/basics.o -o Main
Main.o: Main.c *.h
	$(CXX) $(CXXFLAGS) -c Main.c -o bin/Main.o
detMatrix.o: functions/detMatrix.c matrix.h
	$(CXX) $(CXXFLAGS) -c functions/detMatrix.c -o bin/detMatrix.o
trMatrix.o: functions/trMatrix.c matrix.h
	$(CXX) $(CXXFLAGS) -c functions/trMatrix.c -o bin/trMatrix.o
basics.o: functions/basics.c matrix.h
	$(CXX) $(CXXFLAGS) -c functions/basics.c -o bin/basics.o
clean:
	rm -f *.o *.gch *~ a.out Main
