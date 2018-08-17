/**
 * @file com.h
 * @brief defined common
 * @author simpart
 */

#ifndef __COM_H__
#define __COM_H__

/*** define ***/
/**
 * @brief value of function return
 */
#define COM_OK  0  //! function is successful
#define COM_NG -1  //! function is failed

/**
 * @brief flag value
 */
#define COM_TRUE  1
#define COM_FALSE 0


/*** prototype ***/
int tlb_start (void);
int tlb_init  (void);

#endif
/* end of file */
