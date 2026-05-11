// ============================================================
// 函数名称: sub_415730
// 虚拟地址: 0x415730
// WARP GUID: 1edc5660-602c-56b1-8d1c-028a81eb11a4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41577c
// [被调用的父级函数]: sub_4157a8, sub_415888, sub_41582c
// ============================================================

void __convention("regparm")sub_415730(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t esi = arg2
    int32_t esi = arg2
    int32_t i = arg3
    void* edi = arg1
    
    while (i != 0)
        int32_t ecx = *(edi + 0xc)
        int32_t i_1 = ecx - *(edi + 0x10)
        
        if (ecx u<= *(edi + 0x10))
            sub_41577c(edi)
            i_1 = *(edi + 0xc)
        
        if (i_1 u>= i)
            i_1 = i
        
        i -= i_1
        arg1 = *(edi + 8) + *(edi + 0x10)
        *(edi + 0x10) += i_1
        int32_t esi_1
        int32_t edi_2
        edi_2, esi_1 = __builtin_memcpy(arg1, esi, i_1 u>> 2 << 2)
        esi = __builtin_memcpy(edi_2, esi_1, i_1 & 3)
}
