#include <msp430g2553.h>
#include <stdint.h>

//if necessary,Use macro definition and Inform your teammates of your macro definition and its significance.



/*
 * @fn:
 * @brief:
 * @para:
 * @return:
 * @comment:
 */
void InitSystemClock(void)
{

}

/*
 * @fn:
 * @brief:
 * @para:
 * @return:
 * @comment:
 */
void InitUART(void)
{

}

void UARTSend()
{

}


/*
 * @fn:
 * @brief:
 * @para:
 * @return:
 * @comment:
 */
void InitADC_t(void)
{


}


/*
 * @fn:
 * @brief:
 * @para:
 * @return:
 * @comment:
 */
uint16_t GetADCValue(void)
{



}

//Filtering algorithm if necessary
float exponentialMovingAverage()
{


}



void main(void)
{
    WDTCTL = WDTPW + WDTHOLD;  // 停止看门狗定时器


    __bis_SR_register(GIE);    // 允许中断

    while (1)
    {
        if ()
        {



        }
    }
}


#pragma vector=ADC10_VECTOR
__interrupt void ADC10_ISR(void)
{


}
