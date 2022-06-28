main: main.o
	$(CXX) $(LDFLAGS) -o $@ $^

main.o: main.cpp

clean:
	rm main main.o
