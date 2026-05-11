// ============================================================
// 函数名称: sub_402e88
// 虚拟地址: 0x402e88
// WARP GUID: 97b1fa8e-0c9b-5428-abd3-6f4ca39fa324
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_488509, sub_484e24
// ============================================================

int32_t __convention("regparm")sub_402e88(int16_t arg1, char arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t count
    int32_t count
    count.b = arg1:1.b
    uint32_t esi = zx.d(arg1.b)
    uint32_t edx = zx.d(arg2)
    int16_t result = 0
    int32_t edi_1 = __builtin_memset(arg3, 0, count)
    int32_t ebx = count << 3
    
    if (edx u>= ebx)
        edx = ebx - 1
    
    if (esi u<= edx)
        result.b = 0xff << (esi.b & 7)
        uint32_t esi_1 = esi u>> 3
        result:1.b = 0xff u>> (not.b(edx.b) & 7)
        uint32_t edx_1 = edx u>> 3
        char* edi_3 = edi_1 - count + esi_1
        
        if (edx_1 != esi_1)
            *edi_3 = result.b
            result.b = 0xff
            *__builtin_memset(&edi_3[1], 0xff, edx_1 - esi_1 - 1) = result:1.b
        else
            result.b &= result:1.b
            *edi_3 = result.b
    
    return result
}
