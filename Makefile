CC = gcc 
BUILD = buildExe
SHELL := /bin/bash
CFLAGE  = -g
SRC = src
EXTERNAL_LIB=$(SRC)/common.c

.PHONEY : clean

$(BUILD)/exe:$(EXTERNAL_LIB)
	$(CC) $(CFLAGE) $(SRC)/* -o exe


$(EXTERNAL_LIB):

	if [[ -f $(EXTERNAL_LIB) ]]; then \
		echo "File exists."; \
	else \
		git clone https://git.selfmade.ninja/username420sri/common.c.git; \
		mv common.c/* src/; \
	fi

clean:
	rm $(BUILD)/*
	