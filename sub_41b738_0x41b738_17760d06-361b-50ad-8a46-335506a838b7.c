// ============================================================
// 函数名称: sub_41b738
// 虚拟地址: 0x41b738
// WARP GUID: 17760d06-361b-50ad-8a46-335506a838b7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032dc, sub_404b90, sub_410524, sub_410414
// [被调用的父级函数]: sub_41bd2c
// ============================================================

void __convention("regparm")sub_41b738(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t i = arg1[2] - 1
    int32_t i = arg1[2] - 1
    
    if (i s< 0)
        return 
    
    do
        int32_t* eax_1 = sub_410524(arg1, i)
        
        if (sub_4032dc(*eax_1, arg2).b != 0)
            sub_404b90(eax_1)
            sub_410414(arg1, i)
        
        i -= 1
    while (i != 0xffffffff)
}
