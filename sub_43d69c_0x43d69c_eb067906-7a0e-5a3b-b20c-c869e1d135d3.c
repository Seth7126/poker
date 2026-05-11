// ============================================================
// 函数名称: sub_43d69c
// 虚拟地址: 0x43d69c
// WARP GUID: eb067906-7a0e-5a3b-b20c-c869e1d135d3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetSubMenu, GetMenuStringA, GetMenuItemID, GetMenuState
// [内部子函数调用]: sub_409498, sub_43ccd8, sub_4093b0, sub_43ce08
// [被调用的父级函数]: sub_43d100
// ============================================================

int32_t __fastcallsub_43d69c(int32_t arg1, HMENU arg2, void* arg3 @ eax, enum MENU_ITEM_FLAGS arg4, int32_t arg5, char* arg6)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    
    if (sub_43ce08(arg3) == 0)
        return GetMenuStringA(arg2, arg1, arg6, arg5, arg4)
    
    var_8 = 0
    
    if ((GetMenuState(arg2, arg1, arg4) & 0x10) == 0)
        if (GetMenuItemID(arg2, arg1) != 0xffffffff)
            sub_43ccd8(arg3)
            var_8 = 0
    else
        HMENU eax_4
        int32_t ecx
        eax_4, ecx = GetSubMenu(arg2, arg1)
        ecx.b = 1
        sub_43ccd8(arg3)
        var_8 = 0
    
    return 0
}
