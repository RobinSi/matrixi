
//LED mapping
int led[16]= {36,30,28,24,34,32,26,22,35,33,27,23,37,31,29,25};

void setup()
{
  for (int n=0; n<16; n++)
  {
  pinMode(led[n], OUTPUT);
  }
}

//! short comment
/**
 * long comment
 * \code
 *   //call loop
 *   loop();
 * \endcode
 * \warning 
 * \see 
 * \bug 
 * \todo 
**/
void loop()
{
  //! * index increment loop
  for (int i=0; i<65536; ++i)
  {
      //! - set mask to 1
      int mask=0x01;
      //LED loop
      for (int j=0; j<16; ++j)
      {
        if ((i & mask)==mask)
        {//LED ON
            digitalWrite(led[j], HIGH);
        }//LED ON
        else
        {//LED OFF
            digitalWrite(led[j], LOW);
        }//LED OFF
        //! - shift mask
        mask=mask<<1;
      }//LED loop
    delay(10);
  }//index increment loop
//! \todo add a stop loop, so it makes a single increment loop
}

