// ============================================================
// 函数名称: sub_42968c
// 虚拟地址: 0x42968c
// WARP GUID: 769cbd1f-f0ed-50b9-82f7-c14e90a6cf69
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030a0, sub_410580, sub_4103c8, sub_410414
// [被调用的父级函数]: sub_430304, sub_42da58
// ============================================================

void __convention("regparm")sub_42968c(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: char ebx = arg2.b
    char ebx = arg2.b
    
    if (arg1 == 0)
        return 
    
    if (data_531788 == 0)
        arg2.b = 1
        int32_t ecx
        data_531788 = sub_4030a0(ecx, arg2)
    
    int32_t edi_1 = arg1
    arg1 = sub_410580(data_531788, edi_1)
    
    if (ebx != 0)
        if (arg1 == 0xffffffff)
            sub_4103c8(data_531788, edi_1)
    else if (arg1 != 0xffffffff)
        sub_410414(data_531788, arg1)
}
