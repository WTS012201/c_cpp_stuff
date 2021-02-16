CXX = gcc
Main: Main.o detMatrix.o trMatrix.o *.h
	$(CXX) $(CXXFLAGS) bin/Main.o bin/trMatrix.o bin/detMatrix.o -o Main
Main.o: Main.c *.h
	$(CXX) $(CXXFLAGS) -c Main.c -o bin/Main.o
detMatrix.o: functions/detMatrix.c matrix.h
	$(CXX) $(CXXFLAGS) -c functions/detMatrix.c -o bin/detMatrix.o
trMatrix.o: functions/trMatrix.c matrix.h
	$(CXX) $(CXXFLAGS) -c functions/trMatrix.c -o bin/trMatrix.o
clean:
	rm -f *.o *.gch *~ a.out Main
