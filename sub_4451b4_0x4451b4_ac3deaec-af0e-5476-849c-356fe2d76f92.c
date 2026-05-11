// ============================================================
// 函数名称: sub_4451b4
// 虚拟地址: 0x4451b4
// WARP GUID: ac3deaec-af0e-5476-849c-356fe2d76f92
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: EnableMenuItem, GetSystemMenu, DeleteMenu
// [内部子函数调用]: sub_4318d0
// [被调用的父级函数]: sub_4452b0
// ============================================================

BOOLsub_4451b4(void* arg1)
{
    // 第一条实际指令: BOOL result = *(arg1 - 4)
    BOOL result = *(arg1 - 4)
    
    if (*(result + 0x211) != 0)
        result = *(arg1 - 4)
        
        if ((*(result + 0x210) & 1) != 0)
            result = *(arg1 - 4)
            
            if (*(result + 0x217) != 1)
                HMENU hMenu = GetSystemMenu(sub_4318d0(*(arg1 - 4)), 0)
                
                if (*(*(arg1 - 4) + 0x211) == 3)
                    DeleteMenu(hMenu, 0xf130, MF_BYCOMMAND)
                    DeleteMenu(hMenu, 7, MF_BYPOSITION)
                    DeleteMenu(hMenu, 5, MF_BYPOSITION)
                    DeleteMenu(hMenu, 0xf030, MF_BYCOMMAND)
                    DeleteMenu(hMenu, 0xf020, MF_BYCOMMAND)
                    DeleteMenu(hMenu, 0xf000, MF_BYCOMMAND)
                    return DeleteMenu(hMenu, 0xf120, MF_BYCOMMAND)
                
                if ((*(*(arg1 - 4) + 0x210) & 2) == 0)
                    EnableMenuItem(hMenu, 0xf020, MF_GRAYED)
                
                result = *(arg1 - 4)
                
                if ((*(result + 0x210) & 4) == 0)
                    return EnableMenuItem(hMenu, 0xf030, MF_GRAYED)
    
    return result
}
