APPS = ./apps
BIN = ./bin
INCLUDE = ./include
OBJ = ./obj
SRC = ./src

all: _src clean_apps _apps
	./bin/main

clean:
	rm -rf $(BIN)/* $(OBJ)/*
clean_apps:
	rm -rf $(BIN)/*

_bin: _apps
_apps: $(BIN)/main

_obj: _src
_src: \
	$(OBJ)/binary_tree.o 

code:
	code $(APPS)/main.cpp $(SRC)/binary_tree.cpp $(INCLUDE)/binary_tree.hpp

$(OBJ)/%.o: $(SRC)/%.cpp $(INCLUDE)/%.hpp
	g++ -c $< -I $(INCLUDE) -o $@

$(BIN)/%: $(APPS)/%.cpp
	g++ $< $(OBJ)/*.o -I $(INCLUDE) -o $@
	
teste:
	$(BIN)/teste
