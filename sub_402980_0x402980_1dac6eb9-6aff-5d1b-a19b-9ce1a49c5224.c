// ============================================================
// 函数名称: sub_402980
// 虚拟地址: 0x402980
// WARP GUID: 1dac6eb9-6aff-5d1b-a19b-9ce1a49c5224
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_404054, sub_4a8878, sub_4105a0, sub_404138, sub_4043ac, sub_4042c0, sub_412670, sub_403e4c, sub_4a7670, sub_412dbc, sub_41d214, sub_42429c, sub_497a44, sub_404308, sub_49fdd0, sub_41c438, sub_4a8bd0, sub_4266b8, sub_404080, sub_410414, sub_40496c, sub_417d44, sub_412d28, sub_408bec, sub_405074, sub_41a478, sub_45340c, sub_4040c4, sub_4a654c, sub_411998, sub_404248, sub_41a628, sub_412bb0, sub_515de8, sub_49ffc4, sub_497ac9, sub_4a6308, sub_405368, sub_4a7e8d, sub_4109a8, sub_412dfc, sub_440bfc, sub_4af608, sub_403ee0, sub_412410, sub_404624, sub_40a0c4, sub_402690
// ============================================================

int32_t __convention("regparm")sub_402980(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg2 u> arg1)
    if (arg2 u> arg1)
        int32_t ecx_3 = arg3 s>> 2
        
        if (ecx_3 s>= 0)
            int32_t esi_3
            int32_t edi_3
            edi_3, esi_3 = __builtin_memcpy(arg2 + arg3 - 4 - (ecx_3 << 2), 
                arg1 + arg3 - 4 - (ecx_3 << 2), ecx_3 << 2)
            int32_t count = arg3 & 3
            __builtin_memcpy(edi_3 + 3 - count, esi_3 + 3 - count, count)
    else if (arg2 != arg1)
        int32_t ecx = arg3 s>> 2
        
        if (ecx s>= 0)
            int32_t esi_1
            int32_t edi_1
            edi_1, esi_1 = __builtin_memcpy(arg2, arg1, ecx << 2)
            __builtin_memcpy(edi_1, esi_1, arg3 & 3)
    
    return arg3
}
