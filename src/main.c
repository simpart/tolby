/**
 * @file main.c
 * @brief startup function
 * @author simpart
 */
#include "tetraring.h"
#include "com.h"

int main (void) {
    
    if (COM_OK != tlb_start()) {
        ttrdbg_print();
        return COM_NG;
    }
    
    return COM_OK;
}
/* end of file */
