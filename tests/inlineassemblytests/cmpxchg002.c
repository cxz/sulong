int main() {
  unsigned char arg1 = 0x55;
  unsigned char arg2 = 0x55;
  unsigned char arg3 = 0xAA;
  unsigned char out1 = 0;
  unsigned char out2 = 0;
  __asm__("cmpxchgb %%cl, %%dl" : "=a"(out1), "=d"(out2) : "a"(arg1), "c"(arg2), "d"(arg3));
  return (out1 == 0xAA) && (out2 == 0xAA);
}
