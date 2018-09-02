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

	send_byte(DATA_TRANSMISSION_STOP, USART);
}

uint8_t receive_byte(USART_TypeDef *USART)
{
	uint8_t EOR = 0;
	uint8_t received_data;

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

void receive_data(USART_TypeDef *USART, uint8_t *data)
{
	uint8_t EOR = 0;
	size_t data_size = sizeof(data) / sizeof(uint8_t);

	do
	{
		for(int i = 0; i < data_size; i++)
		{
			char buffor = receive_byte(USART);

			if(buffor != DATA_TRANSMISSION_STOP)
			{
				data[0] = buffor;
			}
			else
			{
				EOR = 1;
			}
		}
	}while(!EOR);

}




