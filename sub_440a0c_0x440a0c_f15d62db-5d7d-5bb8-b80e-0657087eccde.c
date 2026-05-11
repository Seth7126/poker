// ============================================================
// 函数名称: sub_440a0c
// 虚拟地址: 0x440a0c
// WARP GUID: f15d62db-5d7d-5bb8-b80e-0657087eccde
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: IsWindow, EnableWindow
// [内部子函数调用]: sub_40276c
// [被调用的父级函数]: sub_448668, sub_44657a, sub_449520
// ============================================================

void __convention("regparm")sub_440a0c(int32_t* arg1)
{
    // 第一条实际指令: int32_t* i = arg1
    int32_t* i = arg1
    
    while (i != 0)
        int32_t* i_1 = i
        
        if (IsWindow(i_1[1]) != 0)
            EnableWindow(i_1[1], 0xffffffff)
        
        i = *i_1
        sub_40276c(i_1)
}
