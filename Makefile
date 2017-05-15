MD := mkdir -p
CC = g++
MO = ./build/src/main.o
DO = ./build/src/deposit.o
MC = ./src/main.cpp
DC = ./src/deposit.cpp
MT = ./test/main.cpp
DT = ./test/deposit_test.cpp
VT = ./test/validation_test.cpp
MTO = ./build/test/main_test.o
DTO = ./build/test/deposit_test.o
VTO = ./build/test/validation_test.o

all: mdt dc test

dc: $(DO) $(MO)
	$(CC) $(MO) $(DO) -o ./bin/deposit-calc

test: $(MTO) $(DTO) $(VTO)
	$(CC) $(MTO) $(DTO) $(VTO) -o ./bin/deposit-calc_test

mdt: $(MC)
	$(MD) ./bin
	$(MD) ./build
	$(MD) ./build/src
	$(MD) ./build/test

$(DO): $(DC)
	$(CC) -c $(DC) -o $(DO)

$(MO): $(MC)
	$(CC)  -c $(MC) -o $(MO)

$(MTO): $(MT)
	$(CC) -c $(MT) -o $(MTO)

$(DTO): $(DT)
	$(CC) -c $(DT) -o $(DTO)

$(VTO): $(VT)
	$(CC) -c $(VT) -o $(VTO)

clean:
	rm ./build/test/*.o
	rm ./build/src/*.o
