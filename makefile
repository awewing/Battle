Character:
	g++ -c Stats.cpp Character.cpp Action.cpp
	g++ -o Character Character.o Stats.o

clean:
	rm *.o
	rm Character
