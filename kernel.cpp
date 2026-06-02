typedef unsigned short uint16_t;

volatile uint16_t* const VGA = (uint16_t*)0xB8000;

extern "C" void kmain()
{
    const char* msg = "42";
    for (int i = 0; msg[i]; i++)
        VGA[i] = (0x0F << 8) | msg[i];

    while (1) { asm volatile("hlt"); }
}
