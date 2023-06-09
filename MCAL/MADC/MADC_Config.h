/*
 * MADC_Config.h
 *
 *  Created on: Mar 7, 2023
 *      Author: user
 */

#ifndef MCAL_MADC_MADC_CONFIG_H_
#define MCAL_MADC_MADC_CONFIG_H_


/*Options for Voltage References
 * 1- VREF_AREF_PIN
 * 2- VREF_AVCC_PIN
 * 3- VREF_2_56v_INTERNAL
 */

#define MADC_SET_VREF VREF_AVCC_PIN

/*Options For Prescaler
 * 1- PRESCALER_DIVIDER_BY_2
 * 2- PRESCALER_DIVIDER_BY_4
 * 3- PRESCALER_DIVIDER_BY_16
 * 4- PRESCALER_DIVIDER_BY_32
 * 5- PRESCALER_DIVIDER_BY_64
 * 6- PRESCALER_DIVIDER_BY_128
 */
#define MADC_SET_RESCALER PRESCALER_DIVIDER_BY_16

/*Options for Adjusting ADC Register Value
 * 1- MADC_RIGHT_ADJUST
 * 2- MADC_LEFT_ADJUST*/
#define MDCA_SET_ADJUST_LEVEL MADC_RIGHT_ADJUST

#endif /* MCAL_MADC_MADC_CONFIG_H_ */
