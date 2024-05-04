CCOPTS=-Wall -Wextra
CC=gcc

testfs: block.o image.o
	$(CC) $(CCOPTS) $^ -o $@

testfs.o: testfs.c
	$(CC) $(CCOPTS) -c testfs.c $<

image.o: image.c
	$(CC) $(CCOPTS) -c image.c $<

block.o: block.c
	$(CC) $(CCOPTS) -c block.c $<

libvvsfs.a: block.o image.o
	ar rcs $@ $^

myexec: testfs.o libvvsfs.a
	$(CC) -o $@ $^