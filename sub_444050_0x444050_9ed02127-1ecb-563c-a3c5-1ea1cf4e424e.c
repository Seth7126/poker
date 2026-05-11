// ============================================================
// 函数名称: sub_444050
// 虚拟地址: 0x444050
// WARP GUID: 9ed02127-1ecb-563c-a3c5-1ea1cf4e424e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ShowWindow
// [内部子函数调用]: sub_4318d0
// [被调用的父级函数]: sub_4493c8, sub_473878, sub_44613c, sub_448dc0
// ============================================================

void __convention("regparm")sub_444050(int32_t* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 == *(arg1 + 0x213))
    if (arg2 == *(arg1 + 0x213))
        return 
    
    *(arg1 + 0x213) = arg2
    
    if ((arg1[8].b & 0x10) == 0 && arg1[0x5a].b != 0)
        int32_t eax
        eax.b = arg2
        ShowWindow(sub_4318d0(arg1), *((eax << 2) + &data_52ea0c))
}
