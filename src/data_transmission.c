#include "data_transmission.h"

/* Sends a byte of data.
 * 		Parameters:
 * 			USARTx: where x can be 1, 2, 3, 4, 5, 6, 7 or 8 to select the USART or
  *         		UART peripheral.
  *         byte: a byte of data to be sent.
  */
void send_byte(USART_TypeDef *USARTx, uint8_t byte)
{
	// Wait until UART TX flag is released.
	while (USART_GetFlagStatus(USARTx, USART_FLAG_TXE) == RESET);
	// Send data byte.
	USART_SendData(USART2, byte);
}

/* Sends an array of data bytes.
 * 		Parameters:
 * 			USARTx: where x can be 1, 2, 3, 4, 5, 6, 7 or 8 to select the USART or
  *         		UART peripheral.
  *         data: pointer to data array to be sent.
  */
void send_data(USART_TypeDef *USARTx, uint8_t *data)
{
	// Check size of data array.
	size_t data_size = sizeof(data) / sizeof(uint8_t);

	// Send byte by byte.
	for(int i = 0; i < data_size; i++)
	{
		send_byte(USARTx, data[i]);
	}

	// Send transmission terminating flag.
	send_byte(USARTx, DATA_TRANSMISSION_STOP);
}


/* Receives data byte.
 * 		Parameters:
 * 			USARTx: where x can be 1, 2, 3, 4, 5, 6, 7 or 8 to select the USART or
  *         		UART peripheral.
  *     Returns received byte.
  */
uint8_t receive_byte(USART_TypeDef *USARTx)
{
	// Reset End of Receiving (EOR) flag.
	uint8_t EOR = 0;
	// Create data receiving buffer.
	uint8_t received_data;

	// Receive data until EOR flag is set.
	do
	{
		// Check if USART RX flag is set.
		if(USART_GetFlagStatus(USARTx, USART_FLAG_RXNE) == SET)
		{
			// Receive data byte.
			received_data =  USART_ReceiveData(USARTx);
			// Set EOR flag.
			EOR = 1;
		}
	}while(!EOR);

	// Return received byte
	return received_data;
}


/* Receives multiple data bytes.
 * 		Parameters:
 * 			USARTx: where x can be 1, 2, 3, 4, 5, 6, 7 or 8 to select the USART or
  *         		UART peripheral.
  *         data: pointer to data array to be received.
  */
void receive_data(USART_TypeDef *USARTx, uint8_t *data)
{
	// Reset End of Receiving (EOR) flag.
	uint8_t EOR = 0;
	// Calculate size of data bytes array and add space for transmission terminating flag.
	size_t data_size = (sizeof(data) / sizeof(uint8_t)) + 1;

	// Receive data until EOR flag is set.
	do
	{
		// Receive byte by byte.
		for(int i = 0; i < data_size; i++)
		{
			// Create data receiving buffer.
			char buffer = receive_byte(USARTx);

			// Check if received data byte is not transmission terminating flag.
			if(buffer != DATA_TRANSMISSION_STOP)
			{
				// Write buffer value to data array.
				data[i] = buffer;
			}
			// Check if received data byte is transmission terminating flag.
			else
			{
				// Set EOR flag.
				EOR = 1;
			}
		}
	}while(!EOR);
}
