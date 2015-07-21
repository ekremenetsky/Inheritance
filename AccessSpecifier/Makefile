TARGET=testProtected

all: $(TARGET)

$(TARGET): $(TARGET).o
	g++ $(TARGET).o -o $(TARGET)

$(TARGET).o: $(TARGET).cpp
	g++ -c $(TARGET).cpp

clean:
	$(RM) *.o $(TARGET)
