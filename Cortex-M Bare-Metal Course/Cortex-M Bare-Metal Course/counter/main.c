 int counter;
int main() {
    *((unsigned int *)0x400FE608U) = 0x20U;
    *((unsigned int *)0x40025400U) = 0x0EU;
    *((unsigned int *)0x4002551CU) = 0x0EU;

    while (1) {
        *((unsigned int *)0x400253FCU) = 0x02U;
		}
       
      
    return 0;
}
