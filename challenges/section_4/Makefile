.PHONY = all

include ../../common.mk

SRC1 = challenge_1/challenge_1.c
SRC2 = challenge_2/challenge_2.c

all:
	@echo "Running Section 3 ..."
	@echo "Challenge 1 demonstrates ..."
	$(CC) $(CFLAGS) -o $(EXE) $(SRC1)
	./$(EXE)
	@$(RM) $(EXE)
	@echo "Challenge 2 demonstrates bit packing via structure ..."
	$(CC) $(CFLAGS) -o $(EXE) $(SRC2)
	./$(EXE) transparent green white dashed
	@$(RM) $(EXE)