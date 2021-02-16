CXX = gcc
Main: Main.o detMatrix.o trMatrix.o *.h
	$(CXX) $(CXXFLAGS) Main.o trMatrix.o detMatrix.o -o Main
Main.o: Main.c *.h
	$(CXX) $(CXXFLAGS) -c Main.c -o Main.o
detMatrix.o: detMatrix.c matrix.h
	$(CXX) $(CXXFLAGS) -c detMatrix.c -o detMatrix.o
trMatrix.o: trMatrix.c matrix.h
	$(CXX) $(CXXFLAGS) -c trMatrix.c -o trMatrix.o
clean:
	rm -f *.o *.gch *~ a.out Main
