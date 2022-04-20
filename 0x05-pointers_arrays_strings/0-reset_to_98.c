​#​include​ ​"​main.h​" 
 ​/*​* 
 ​ * reset_to_98 - reset argument to 98 
 ​ * @n: pointer 
 ​ * Return: void 
 ​*/ 
  
 ​void​ ​reset_to_98​(​int​ *n) 
 ​{ 
  
 ​        *n = ​98​; 
  
 ​}

task 1: 1-swap.c
 
 ​#​include​ ​"​main.h​" 
 ​/*​* 
 ​ * swap_int - swap variable values 
 ​ * @a: pointer 1 
 ​ * @b: pointer 2 
 ​ * Return: void 
 ​*/ 
  
 ​void​ ​swap_int​(​int​ *a, ​int​ *b) 
 ​{ 
 ​        *a += *b; 
 ​        *b = *a - *b; 
 ​        *a = *a - *b; 
 ​}
