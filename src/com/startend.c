/**
 * @file startend.c
 * @brief start and end process
 * @author simpart
 */
/*** include ***/
#include "com.h"
#include "conf.h"
#include "iface.h"
#include "tetraring.h"

/*** function ***/
/**
 * start application
 */
int tlb_start (void) {
    
    if (COM_OK != tlb_init()) {
        return COM_NG;
    }
    return COM_OK;
}

/**
 * call every init function
 */
int tlb_init  (void) {
    
    /* config */
    if (COM_OK != tlbcnf_init()) {
        TTRDBG_ERR("failed init");
        return COM_NG;
    }
    
    /* interface */
    if (COM_OK != tlbifc_init()) {
        TTRDBG_ERR("failed init");
        return COM_NG;
    }
    
    
    return COM_OK;
}
