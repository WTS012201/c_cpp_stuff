CXX = gcc
Main: Main.o detMatrix.o *.h
	$(CXX) $(CXXFLAGS) Main.o detMatrix.o -o Main
Main.o: Main.c *.h
	$(CXX) $(CXXFLAGS) -c Main.c -o Main.o
detMatrix.o: detMatrix.c matrix.h
	$(CXX) $(CXXFLAGS) -c detMatrix.c -o detMatrix.o
clean:
	rm -f *.o *.gch *~ a.out Main
