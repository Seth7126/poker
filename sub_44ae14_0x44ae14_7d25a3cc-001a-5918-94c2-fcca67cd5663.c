// ============================================================
// 函数名称: sub_44ae14
// 虚拟地址: 0x44ae14
// WARP GUID: 7d25a3cc-001a-5918-94c2-fcca67cd5663
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

long double __convention("regparm")sub_44ae14(void* arg1, void* arg2, void* arg3, int32_t* arg4 @ esi, long double arg5 @ st0, char arg6)
{
    // 第一条实际指令: bool c
    bool c
    arg1.b = sbb.b(arg1.b, 0xb, c)
    *(arg1 + 0x4c0042d4) += arg1.b
    char* eax = *arg4
    *eax += eax.b
    long double result = arg5 + fconvert.t(*(arg2 + 1))
    void* ecx
    ecx:1.b = 0x42
    arg6 += 0x42
    *(ecx + 0x64b40042) += (ecx + 1).b
    int16_t eax_1
    int32_t entry_ebx
    eax_1:1.b = __return_addr.w:1.b + entry_ebx.b
    eax_1.b += ((ecx + 1).w + 1):1.b
    return result
}
