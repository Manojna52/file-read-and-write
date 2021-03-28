SRC= file.c
all.exe:$(SRC)
	gcc $(SRC) -o yes1.exe
clear:
	del *.exe