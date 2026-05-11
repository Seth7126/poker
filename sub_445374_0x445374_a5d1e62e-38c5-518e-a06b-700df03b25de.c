// ============================================================
// 函数名称: sub_445374
// 虚拟地址: 0x445374
// WARP GUID: a5d1e62e-38c5-518e-a06b-700df03b25de
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetMenu, SendMessageA
// [内部子函数调用]: sub_43d2b0, sub_430bc0, sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

HANDLE __convention("regparm")sub_445374(int32_t* arg1)
{
    // 第一条实际指令: if (*data_53040c != 0)
    if (*data_53040c != 0)
        SendMessageA(sub_4318d0(arg1), 0x80, 1, 0)
    
    if (arg1[0x8c] != 0 && *(arg1 + 0x217) != 1)
        SetMenu(sub_4318d0(arg1), nullptr)
        sub_43d2b0(arg1[0x8c], 0)
    
    return sub_430bc0(arg1)
}
