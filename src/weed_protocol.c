/*
 * weed_protocol.c
 *
 *  Created on: 22.07.2018
 *      Author: Fisiel
 */

#include "weed_protocol.h"

void send_byte(USART_TypeDef *USART, uint8_t byte)
{
	while (USART_GetFlagStatus(USART, USART_FLAG_TXE) == RESET);
	USART_SendData(USART2, byte);
}

void send_data(USART_TypeDef *USART, uint8_t *data)
{
	size_t data_size = sizeof(data) / sizeof(uint8_t);

	for(int i = 0; i < data_size; i++)
	{
		send_byte(USART, data[i]);
	}

	send_byte(DATA_SEND_STOP, USART);
}

uint8_t receive_byte(USART_TypeDef *USART)
{
	uint8_t EOR = 0;
	char received_data;

	do
	{
		if(USART_GetFlagStatus(USART, USART_FLAG_RXNE) == SET)
		{
			received_data =  USART_ReceiveData(USART);
			EOR = 1;
		}
	}while(!EOR);

	return received_data;
}

uint8_t * receive_data(USART_TypeDef *USART, size_t data_size)
{
	static uint8_t received_data[data_size];

	return received_data;
}




