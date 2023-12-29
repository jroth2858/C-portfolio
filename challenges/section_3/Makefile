.PHONY = all
.IGNORE: all

include ../../common.mk

SRC1 = challenge_1/challenge_1.c

all:
	@echo "Running Section 2 ..."
	@echo "Challenge 1 demonstrates usage of the const type qualifier. An error will occur at compile time since we attempt to change a const variable."
	$(CC) $(CFLAGS) -o $(EXE) $(SRC1)
	./$(EXE) 1 2 3 4 5
	@$(RM) $(EXE)
	@echo "Challenge 2 is not run. Instead examine the source dummy code for an example of how volatile might be used."
	