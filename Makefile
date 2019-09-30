CC=c:\gbdk\bin\lcc
CFLAGS=-Wl-j

define compile-source
	$(CC) $(CFLAGS) -c $<
endef

default: main.gb

OBJ=main.o
OBJ_BANK1=eric.o gamecharacter.o helper.o

$(OBJ_BANK1): CFLAGS+=-Wf-bo1

main.o: main.c main.h
	${compile-source}

eric.o: eric.c eric.h
	${compile-source}

gamecharacter.o: gamecharacter.c gamecharacter.h
	${compile-source}

helper.o: helper.c helper.h
	${compile-source}

main.gb: $(OBJ) $(OBJ_BANK1)
	$(CC) $(CFLAGS) -Wl-yt3 -Wl-yo16 -Wl-ya1 $^ -o $@