// ============================================================
// 函数名称: sub_431bd8
// 虚拟地址: 0x431bd8
// WARP GUID: bda28afa-a04c-5f56-ba06-90a8370afa22
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetWindowRect, GetWindowLongA, IsIconic, ScreenToClient, GetWindowPlacement
// [内部子函数调用]: sub_42aebc
// [被调用的父级函数]: sub_42fc10, sub_42eac0, sub_42fd54, sub_42fd20
// ============================================================

int32_t __convention("regparm")sub_431bd8(void* arg1)
{
    // 第一条实际指令: int32_t var_48
    int32_t var_48
    
    if (IsIconic(*(arg1 + 0x14c)) == 0)
        GetWindowRect(*(arg1 + 0x14c), &var_48)
    else
        WINDOWPLACEMENT lpwndpl
        lpwndpl.length = 0x2c
        GetWindowPlacement(*(arg1 + 0x14c), &lpwndpl)
        var_1c
        __builtin_memcpy(&var_48, &var_1c, 0x10)
    
    POINT point
    
    if ((GetWindowLongA(*(arg1 + 0x14c), 0xfffffff0) & 0x40000000) != 0)
        int32_t hWnd = GetWindowLongA(*(arg1 + 0x14c), 0xfffffff8)
        
        if (hWnd != 0)
            ScreenToClient(hWnd, &var_48)
            ScreenToClient(hWnd, &point)
    
    *(arg1 + 0x30) = var_48
    int32_t var_44
    *(arg1 + 0x34) = var_44
    *(arg1 + 0x38) = point.x - var_48
    *(arg1 + 0x3c) = point.y - var_44
    return sub_42aebc(arg1)
}
