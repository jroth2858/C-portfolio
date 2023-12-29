.PHONY = all
.IGNORE: all

include ../../common.mk

SRC1 = challenge_1/challenge_1.c

all:
	@echo "Running Section 2 ..."
	@echo "Challenge 1 demonstrates usage of the const type qualifier. An error will occur at compile time since we attempt to change a const variable."
	$(CC) $(CFLAGS) -o $(EXE) $(SRC1)
	./$(EXE)
	@$(RM) $(EXE)
	@echo "Challenge 2 is not run. Instead examine the source dummy code for an example of how volatile might be used."
	@echo "Challenge 3 illustrates an issue that may result from the incorrect usage of the type qualifer 'restrict'. Since the compiler may not try to optimize in the manner specified in the source comments it is also not run."