// ============================================================
// 函数名称: sub_4c9fa9
// 虚拟地址: 0x4c9fa9
// WARP GUID: ae26cdf4-4524-5f34-ab32-8281fa75f430
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void __fastcallsub_4c9fa9(int16_t arg1, int32_t arg2, char* arg3 @ esi) __noreturn
{
    // 第一条实际指令: char* eax
    char* eax
    bool c
    bool p
    bool a
    bool z
    bool s
    eax:1.b = (s ? 1 : 0) << 7 | (z ? 1 : 0) << 6 | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2 | (c ? 1 : 0)
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    char temp0 = eax:1.b
    eax:1.b += arg2:1.b
    bool p_1 = unimplemented  {add ah, dh}
    bool a_1 = unimplemented  {add ah, dh}
    eax:1.b = (temp0 + arg2:1.b s< 0 ? 1 : 0) << 7 | (temp0 == neg.b(arg2:1.b) ? 1 : 0) << 6
        | (a_1 ? 1 : 0) << 4 | (p_1 ? 1 : 0) << 2 | (temp0 + arg2:1.b u< temp0 ? 1 : 0)
    arg3[arg2] += arg1:1.b
    char temp1 = eax.b
    char entry_ebx
    eax.b += entry_ebx
    *eax = adc.b(*eax, eax.b, temp1 + entry_ebx u< temp1)
    trap(0xd)
}
