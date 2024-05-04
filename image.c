#include "image.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

int image_open(char *filename, int truncate){
    // Open image file, or create if doesn't exist, truncate it to 0 if truncate true
    return open(filename, O_RDWR | O_CREAT | (truncate ? O_TRUNC : 0), 0644);
}

int image_close(void){

}