// ============================================================
// 函数名称: sub_43d3e0
// 虚拟地址: 0x43d3e0
// WARP GUID: 18e26a41-45bd-52ce-b1a9-f81a82324610
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetSubMenu, GetMenuItemID
// [内部子函数调用]: sub_43ccd8, sub_440e70
// [被调用的父级函数]: sub_43d524
// ============================================================

int32_t __convention("regparm")sub_43d3e0(HMENU arg1, char arg2, int32_t arg3, char arg4, void* arg5)
{
    // 第一条实际指令: if ((arg2 & 0x10) == 0)
    if ((arg2 & 0x10) == 0)
        uint32_t eax_2
        int32_t ecx_1
        eax_2, ecx_1 = GetMenuItemID(arg1, arg3)
        
        if (eax_2 != 0xffffffff)
            sub_43ccd8(*(arg5 - 4))
    else
        HMENU eax
        int32_t ecx
        eax, ecx = GetSubMenu(arg1, arg3)
        ecx.b = 1
        sub_43ccd8(*(arg5 - 4))
    
    return 0
}
