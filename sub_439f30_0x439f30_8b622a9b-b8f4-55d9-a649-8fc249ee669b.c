// ============================================================
// 函数名称: sub_439f30
// 虚拟地址: 0x439f30
// WARP GUID: 8b622a9b-b8f4-55d9-a649-8fc249ee669b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: RemoveMenu, DestroyMenu, GetMenuItemCount
// [内部子函数调用]: sub_439e08, sub_43a014, sub_439f30, sub_403248
// [被调用的父级函数]: sub_439ef4, sub_439ed0, sub_43cd94, sub_439f30, sub_43baf0, sub_43bba0, sub_43e014, sub_43bd18
// ============================================================

void __convention("regparm")sub_439f30(int32_t* arg1)
{
    // 第一条实际指令: if ((arg1[8].b & 8) != 0)
    if ((arg1[8].b & 8) != 0)
        return 
    
    if ((arg1[8].b & 2) != 0)
        arg1[0x1a].b = 1
    else if (arg1[0x18] == 0)
        while (GetMenuItemCount(sub_43a014(arg1)) s> 0)
            RemoveMenu(sub_43a014(arg1), 0, MF_BYPOSITION)
        
        char eax_7
        
        if (arg1[0x16] == 0)
            eax_7 = sub_403248(arg1[0x19], 0x438b44)
        
        if (arg1[0x16] != 0 || eax_7 == 0)
            sub_439e08(arg1)
        else
            DestroyMenu(arg1[0xa])
            arg1[0xa] = 0
        
        (*(*arg1 + 0x38))()
    else
        sub_439f30()
}
