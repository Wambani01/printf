#include "main.h"
/**
* prnt_string - print string
* @string: parameter
* Return : nothing
*/
void prnt_string(char *string)                                                                                                    
{                                                                                                                                 
            int n = 0;                                                                                                            
            for(n = 0; string[n] != '\0'; n++)                                                                                    
            {                                                                                                                     
                 _putchar(string[n]);                                                                                             
            }                                                                                                                     
}             
