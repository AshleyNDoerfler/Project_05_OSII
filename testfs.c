#include "image.h"
#include "block.h"
#include <testfs.h>

#ifdef CTEST_ENABLE

void test_image_open(){
    CTEST_ASSERT
}

void test_image_close(){
    CTEST_ASSERT
}

void test_block_bread(){
    CTEST_ASSERT
}

void test_block_bwrite(){
    CTEST_ASSERT
}

int main(){
    CTEST_VERBOSE(1);
    
    test_image_open();
    test_image_close();
    test_block_bread();
    test_block_bwrite();

    CTEST_RESULTS();
    CTEST_EXIT();
}

#else

int main(){

    printf("Testfs is not enabled\n");
    printf("TODO");
}

#endif