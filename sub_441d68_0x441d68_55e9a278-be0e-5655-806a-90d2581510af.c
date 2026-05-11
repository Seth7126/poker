// ============================================================
// 函数名称: sub_441d68
// 虚拟地址: 0x441d68
// WARP GUID: 55e9a278-be0e-5655-806a-90d2581510af
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4418c0, sub_441d44
// [被调用的父级函数]: sub_446ad8, sub_44399c
// ============================================================

void __convention("regparm")sub_441d68(void* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 == *(arg1 + 0x1f8))
    if (arg2 == *(arg1 + 0x1f8))
        return 
    
    *(arg1 + 0x1f8) = arg2
    
    if (arg2 == 0)
        sub_4418c0(*(arg1 + 0x1f0))
        sub_4418c0(*(arg1 + 0x1f4))
    else
        sub_441d44(arg1)
}
