// ============================================================
// 函数名称: sub_442fa0
// 虚拟地址: 0x442fa0
// WARP GUID: 2efe4348-c1dc-5309-ab81-a1eefb2a9c94
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: AdjustWindowRectEx, SetRect, GetWindowLongA, IsIconic
// [内部子函数调用]: sub_431998, sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

BOOL __convention("regparm")sub_442fa0(int32_t* arg1, RECT* arg2)
{
    // 第一条实际指令: if (IsIconic(sub_4318d0(arg1)) == 0)
    if (IsIconic(sub_4318d0(arg1)) == 0)
        return sub_431998(arg1, arg2)
    
    SetRect(arg2, 0, 0, 0, 0)
    int32_t dwExStyle = GetWindowLongA(sub_4318d0(arg1), 0xffffffec)
    int32_t eax_5
    eax_5.b = arg1[0x8c] != 0
    char temp0 = eax_5.b
    eax_5.b = neg.b(eax_5.b)
    AdjustWindowRectEx(arg2, GetWindowLongA(sub_4318d0(arg1), 0xfffffff0), 
        sbb.d(eax_5, eax_5, temp0 != 0), dwExStyle)
    return SetRect(arg2, 0, 0, arg1[0xe] - arg2->right + arg2->left, 
        arg1[0xf] - arg2->bottom + arg2->top)
}
