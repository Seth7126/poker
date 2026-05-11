// ============================================================
// 函数名称: sub_444830
// 虚拟地址: 0x444830
// WARP GUID: 8da5fc76-5f2d-5674-a0ad-fa568c697fa3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_42ecf4, sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_444830(int32_t* arg1)
{
    // 第一条实际指令: if ((arg1[0xb3].b & 0x10) == 0)
    if ((arg1[0xb3].b & 0x10) == 0)
        sub_42ecf4(arg1)
    else
        WPARAM wParam = sub_4318d0(arg1)
        SendMessageA(*(*(data_5317d8 + 0x38) + 0x23c), 0x221, wParam, 0)
    
    arg1[0x8f] = 0
    return 0
}
