CC:=g++
CCFLAGS:=
LDFLAGS:=

TARGETS_DIR:=.
OBJ_DIR=.
SRC_DIR=.

TARGETS:=$(TARGETS_DIR)/main
MAINS:=$(OBJ_DIR)/main.o
OBJ:=$(OBJ_DIR)/vertex.o $(OBJ_DIR)/edge.o

.PHONY:all clean

all:$(TARGETS)

clean:
	rm -f $(MAINS) $(OBJ) $(TARGETS)

$(TARGETS):$(MAINS) $(OBJ)
	$(CC) -o $(TARGETS) $(MAINS) $(OBJ)

$(MAINS):$(SRC_DIR)/main.cpp $(SRC_DIR)/vertex.h $(SRC_DIR)/edge.h
	$(CC) -c -o $(MAINS) $(SRC_DIR)/main.cpp

$(OBJ_DIR)/vertex.o:$(SRC_DIR)/vertex.cpp $(SRC_DIR)/vertex.h
	$(CC) -c -o $(OBJ_DIR)/vertex.o $(SRC_DIR)/vertex.cpp

$(OBJ_DIR)/edge.o:$(SRC_DIR)/edge.cpp $(SRC_DIR)/edge.h
	$(CC) -c -o $(OBJ_DIR)/edge.o $(SRC_DIR)/edge.cpp