__start = 0x80000000;

/* Host-callable helpers. Each address is a placeholder that N64Recomp turns
 * into a call dispatched by librecomp's manual patch symbol table. */
bm64_host_call_process = 0x8F0000F0;
bm64_host_apply_cheats = 0x8F0000F4;
