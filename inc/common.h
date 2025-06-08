#ifndef COMMON_H_ 
#define COMMON_H_

//Include standard libraries 

#ifdef __cplusplus
#include <cstdint> 
#include <cstdlib>
#else
#include <stdin.h>
#include <stdlib.h>
#endif

//STM specific headers
#ifdef STM32L432KC
#define STm32L432xx
#include <stm321432xx.h>
#include <stm3214xx.h>
#include <system_stm3214xx.h>
#endif

#endif /* COMMON_H_ */
