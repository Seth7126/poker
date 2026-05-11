// ============================================================
// 函数名称: sub_402e64
// 虚拟地址: 0x402e64
// WARP GUID: 62718727-9d7c-5f63-a3e5-eb9487664456
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4e6659, sub_46ae30, sub_51e034, sub_50b624, sub_47d208, sub_4d9734, sub_4d6b10, sub_4e649b
// ============================================================

char __convention("regparm")sub_402e64(int32_t arg1, char arg2, char arg3)
{
    // 第一条实际指令: int32_t count
    int32_t count
    count.b = arg3
    int32_t ecx_1
    int32_t edi_1
    edi_1, ecx_1 = __builtin_memset(arg1, 0, count)
    char* edi_2 = edi_1 - count
    ecx_1.b = arg2
    char result = rol.b(1, ecx_1.b)
    uint32_t ecx_2 = ecx_1 u>> 3
    
    if (ecx_2 u< count)
        edi_2[ecx_2] |= result
    
    return result
}
