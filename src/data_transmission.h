#ifndef DATA_TRANSMISSION_H_
#define DATA_TRANSMISSION_H_
#include <stdlib.h>
#include "stm32f4xx_usart.h"

#define DATA_TRANSMISSION_STOP '\n'

void send_byte(USART_TypeDef *USARTx, uint8_t byte);
void send_data(USART_TypeDef *USARTx, uint8_t *data);
uint8_t receive_byte(USART_TypeDef *USARTx);
void receive_data(USART_TypeDef *USARTx, uint8_t *data);

#endif /* DATA_TRANSMISSION_H_ */
