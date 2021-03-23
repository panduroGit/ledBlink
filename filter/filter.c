/*
 * filter.c
 *
 *  Created on: 23 Mar 2021
 *      Author: spa
 */


#include "Filter.h"
#include <sys/_stdint.h>

uint16_t Filter_AddVal(uint16_t PrevVal, uint16_t NewVal)
{
	uint32_t Product = (uint32_t)PrevVal * 3;
    return (uint16_t)((Product + NewVal) / 4);
}
