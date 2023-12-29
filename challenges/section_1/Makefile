.PHONY: all

include ../../common.mk

SRC1 := challenge_1/challenge_1.c challenge_1/challenge_1_helper.c
SRC2 := challenge_2/challenge_2.c
SRC3 := challenge_3/main.c challenge_3/display.c

all: 
	@echo "Running Section 1 ..."
	@echo "Challenge 1 demonstrates several variable definitions types."
	$(CC) $(CFLAGS) -o $(EXE) $(SRC1)
	./$(EXE)
	@echo "Challenge 2 demonstrates the static duration of variables."
	$(CC) $(CFLAGS) -o $(EXE) $(SRC2)
	./$(EXE)
	@$(RM) $(EXE)
	@echo "Challenge 3 reiterates usage of global variables among files by defining a variable globally and accessing it from another file multiple times each time incrementing it by 1."
	$(CC) $(CFLAGS) -o $(EXE) $(SRC3)
	./$(EXE)
	@$(RM) $(EXE)

