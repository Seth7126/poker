// ============================================================
// 函数名称: sub_4093dc
// 虚拟地址: 0x4093dc
// WARP GUID: 31322d0d-9340-5bcd-81a2-bf0855336d2b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_409608, sub_4095cc
// ============================================================

void __convention("regparm")sub_4093dc(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg1 u> arg2)
    if (arg1 u> arg2)
        int32_t count = arg3 & 3
        int32_t esi_3
        int32_t edi_3
        edi_3, esi_3 = __builtin_memcpy(arg1 + arg3 - 1 - count, arg2 + arg3 - 1 - count, count)
        uint32_t ecx_4 = arg3 u>> 2
        __builtin_memcpy(edi_3 - 3 - (ecx_4 << 2), esi_3 - 3 - (ecx_4 << 2), ecx_4 << 2)
    else if (arg1 != arg2)
        int32_t esi_1
        int32_t edi_1
        edi_1, esi_1 = __builtin_memcpy(arg1, arg2, arg3 u>> 2 << 2)
        __builtin_memcpy(edi_1, esi_1, arg3 & 3)
}
