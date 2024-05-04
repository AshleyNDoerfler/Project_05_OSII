#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include "image.h"

#define BLOCK_SIZE 4096

unsigned char *bread(int block_num, unsigned char *block){
    // Find the block offset using block number and size
    int offset = block_num * BLOCK_SIZE;
    // Seek to the block offset of the image file
    // ref: https://man7.org/linux/man-pages/man2/lseek.2.html
    unsigned char *block = lseek(image_fd, offset, SEEK_SET);
    // Read the block from the image file
    // ref: https://man7.org/linux/man-pages/man2/read.2.html
    read(image_fd, block, BLOCK_SIZE);
    return block;
}

void bwrite(int block_num, unsigned char *block){
    // Find the block offset using block number and size
    int offset = block_num * BLOCK_SIZE;
    // Seek to the block offset of the image file
    unsigned char *block = lseek(image_fd, offset, SEEK_SET);
    // Write the block to the image file
    // ref: https://man7.org/linux/man-pages/man2/write.2.html
    write(image_fd, block, BLOCK_SIZE);
}