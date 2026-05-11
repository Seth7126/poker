// ============================================================
// 函数名称: sub_43d044
// 虚拟地址: 0x43d044
// WARP GUID: 383f9964-07ea-580f-820d-614aff49130c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetMenuItemInfoA, DrawMenuBar, SetMenuItemInfoA
// [内部子函数调用]: sub_43d3c8
// [被调用的父级函数]: sub_43d744
// ============================================================

void* __convention("regparm")sub_43d044(int32_t* arg1)
{
    // 第一条实际指令: void* result = data_530a80
    void* result = data_530a80
    
    if (*(result + 9) != 0 && arg1[0xb] != 0)
        HMENU hmenu = (*(*arg1 + 0x34))()
        MENUITEMINFOA lpmii
        lpmii.cbSize = 0x2c
        lpmii.fMask = 0x10
        void var_58
        lpmii.dwTypeData = &var_58
        lpmii.cch = 0x50
        result = GetMenuItemInfoA(hmenu, 0, 0xffffffff, &lpmii)
        
        if (result != 0)
            result = sub_43d3c8(arg1)
            int32_t edx_3 = lpmii.fType & 0x6000
            int32_t edx_4 = neg.d(edx_3)
            
            if (result.b != (neg.d(sbb.d(edx_4, edx_4, edx_3 != 0))).b)
                lpmii.fType = ((sub_43d3c8(arg1) & 0x7f) * 0x6000) | (lpmii.fType & 0xffff9fff)
                lpmii.fMask = 0x10
                result = SetMenuItemInfoA(hmenu, 0, 0xffffffff, &lpmii)
                
                if (result != 0)
                    return DrawMenuBar(arg1[0xb])
    
    return result
}
