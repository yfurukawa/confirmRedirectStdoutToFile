CC=g++
INCLUDE=-I /usr/include
LIBLARY=-L /usr/lib
OPT=-g3 -O2
LIB=

RM=rm

SRC= main.cpp CDirector.cpp CWorker.cpp CWorkerMock.cpp
OBJ= main.o CDirector.o CWorker.o CWorkerMock.o
TARGET=confirmCoutRedirect

$(TARGET): $(OBJ)
	$(CC) $(INCLUDE) $(LIBLARY) $(OPT) $(LIB) -o $(TARGET) $(SRC)

clean:
	$(RM) -rf *.o $(TARGET) *.exe output.txt
