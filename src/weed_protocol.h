#ifndef WEED_PROTOCOL_H_
#define WEED_PROTOCOL_H_

#include "stm32f4xx.h"

#define DATA_TRANSMISSION_STOP '\n'

void send_byte(uint8_t byte, USART_TypeDef *USART);
uint8_t receive_byte(USART_TypeDef *USART);

#endif /* WEED_PROTOCOL_H_ */
