testfs: block.o image.o
	gcc $^ -o $@

testfs.o: testfs.c
	gcc -Wall -Wextra -Werror -c testfs.c $<

image.o: image.c
	gcc -Wall -Wextra -Werror -c image.c $<

block.o: block.c
	gcc -Wall -Wextra -Werror -c block.c $<