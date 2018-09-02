#ifndef WEED_PROTOCOL_H_
#define WEED_PROTOCOL_H_

#include "stm32f4xx.h"

#define DATA_TRANSMISSION_STOP '\n'

void send_byte(USART_TypeDef *USARTx, uint8_t byte);
void send_data(USART_TypeDef *USARTx, uint8_t *data);
uint8_t receive_byte(USART_TypeDef *USARTx);
void receive_data(USART_TypeDef *USARTx, uint8_t *data);

#endif /* WEED_PROTOCOL_H_ */
