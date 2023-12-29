.PHONY = all

include ../../common.mk

SRC1 = challenge_1/challenge_1.c
SRC2 = challenge_2/challenge_2.c
SRC3 = challenge_3/challenge_3.c

all:
	@echo "Running Section 2 ..."
	@echo "Challenge 1 demonstrates usage of variable length arrays."
	$(CC) $(CFLAGS) -o $(EXE) $(SRC1)
	./$(EXE) 1 2 3 4 5
	@$(RM) $(EXE)
	@echo "Challenge 2 demonstrates usage of flexible array members."
	$(CC) $(CFLAGS) -o $(EXE) $(SRC2)
	./$(EXE) 1 2 3 4 5
	@$(RM) $(EXE)
	@echo "Challenge 3 demonstrates usage of complex number types."
	$(CC) $(CFLAGS) -o $(EXE) $(SRC3)
	./$(EXE) 
	@$(RM) $(EXE)