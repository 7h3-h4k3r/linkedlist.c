CC = gcc 
BUILD = buildExe
SHELL := /bin/bash
SRC = src
EXTERNAL_LIB=$(SRC)/common.c

$(BUILD)/exe:$(EXTERNAL_LIB)
	$(CC) $(SRC)/* -o $(BUILD)/exe


$(EXTERNAL_LIB):

	if [[ -f $(EXTERNAL_LIB) ]]; then \
		echo "File exists."; \
	else \
		git clone https://git.selfmade.ninja/username420sri/common.c.git; \
		mv common.c/* src/; \
		rm -rf common.c;\
	fi


	
