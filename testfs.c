#include "image.h"
#include <testfs.h>

int main(){
    image_open("testfs", 1);
    image_close();

    return 0;
}