// ============================================================
// 函数名称: sub_41281c
// 虚拟地址: 0x41281c
// WARP GUID: 1f47eea7-6f3e-5665-abd7-2e21c71e9e94
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4473f4, sub_4ae168, sub_4adc14
// ============================================================

void __convention("regparm")sub_41281c(int32_t* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 == arg1[6].b)
    if (arg2 == arg1[6].b)
        return 
    
    if (arg2 != 0)
        (*(*arg1 + 0x7c))()
    
    arg1[6].b = arg2
}
