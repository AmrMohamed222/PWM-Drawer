/*
 * BIT_MATH.h
 *
 *  Created on: Mar 7, 2023
 *      Author: user
 */

#ifndef LIB_BIT_MATH_H_
#define LIB_BIT_MATH_H_

#define SET_BIT(REG,BIT) REG|=(1<<BIT)
#define GET_BIT(REG,BIT) ((REG>>BIT) & 1)
#define CLR_BIT(REG,BIT) REG&=~(1<<BIT)
#define TOGGLE_BIT(REG,BIT) REG^=(1<<BIT)


#endif /* LIB_BIT_MATH_H_ */
