// ============================================================
// 函数名称: sub_413a6c
// 虚拟地址: 0x413a6c
// WARP GUID: 501b5e75-a597-598f-8e94-e5c3eca0406e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_413ab8
// [被调用的父级函数]: sub_413b08, sub_41449c, sub_415108, sub_414430, sub_414330, sub_414264, sub_4151c8, sub_415210, sub_415168, sub_415294, sub_414224, sub_4152e8, sub_4136c4, sub_4142a4, sub_4142f0, sub_41512c
// ============================================================

void __convention("regparm")sub_413a6c(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t edi = arg2
    int32_t edi = arg2
    int32_t i = arg3
    void* esi = arg1
    
    while (i != 0)
        int32_t ecx = *(esi + 0x14)
        int32_t i_1 = ecx - *(esi + 0x10)
        
        if (ecx u<= *(esi + 0x10))
            sub_413ab8(esi)
            i_1 = *(esi + 0x14)
        
        if (i_1 u>= i)
            i_1 = i
        
        i -= i_1
        arg1 = *(esi + 8) + *(esi + 0x10)
        *(esi + 0x10) += i_1
        int32_t esi_2
        int32_t edi_1
        edi_1, esi_2 = __builtin_memcpy(edi, arg1, i_1 u>> 2 << 2)
        edi = __builtin_memcpy(edi_1, esi_2, i_1 & 3)
}
