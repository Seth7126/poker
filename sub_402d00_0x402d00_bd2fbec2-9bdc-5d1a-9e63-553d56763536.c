// ============================================================
// 函数名称: sub_402d00
// 虚拟地址: 0x402d00
// WARP GUID: bd2fbec2-9bdc-5d1a-9e63-553d56763536
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_43b5b8, sub_452f08, sub_41efec, sub_410718, sub_41ca88, sub_41ea20, sub_453830, sub_48f760, sub_4b556c, sub_453acc, sub_40886c, sub_49a9d4, sub_49a9e8, sub_41ac98, sub_41a3a8, sub_433ab0, sub_41e6c8, sub_42e994, sub_41aebc, sub_49bf10, sub_4533f4, sub_41db84, sub_495930, sub_4077a8, sub_48f9d0, sub_418b14, sub_490828, sub_41e4f8, sub_4b63ac, sub_49c048, sub_49292c, sub_41ec48, sub_405368, sub_4109a8, sub_490d38, sub_467190, sub_41e300, sub_404410, sub_41ebd8, sub_41f72c, sub_4b3c44, sub_41f1b0
// ============================================================

int32_t __convention("regparm")sub_402d00(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: arg3:1.b = arg3.b
    arg3:1.b = arg3.b
    int32_t result
    result.w = arg3.w
    int32_t ecx_1 = arg2 s>> 2
    
    if (ecx_1 s>= 0)
        int32_t ecx_2
        int32_t edi_1
        edi_1, ecx_2 = __memfill_u32(arg1, result, ecx_1)
        int32_t ecx_5
        int32_t edi_2
        edi_2, ecx_5 = __memfill_u8(edi_1, result.b, arg2 & 3)
    
    return result
}
