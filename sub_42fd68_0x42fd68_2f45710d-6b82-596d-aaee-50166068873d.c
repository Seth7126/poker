// ============================================================
// 函数名称: sub_42fd68
// 虚拟地址: 0x42fd68
// WARP GUID: 2f45710d-6b82-596d-aaee-50166068873d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetCursorPos, SetCursor, GetLastActivePopup, GetForegroundWindow
// [内部子函数调用]: sub_44763c, sub_42b31c, sub_448eb0, sub_42f140
// [被调用的父级函数]: 无
// ============================================================

HCURSOR __convention("regparm")sub_42fd68(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: if (*(arg2 + 4) == arg1[0x53])
    if (*(arg2 + 4) == arg1[0x53])
        int32_t eax
        eax.w = *(arg2 + 8)
        int16_t temp0_1 = eax.w
        eax.w -= 0xfffe
        
        if (temp0_1 != 0xfffe)
            int16_t temp1_1 = eax.w
            eax.w -= 3
            
            if (temp1_1 == 3)
                int32_t edi
                edi.w = *(*data_530a18 + 0x38)
                
                if (edi.w == 0)
                    void point
                    GetCursorPos(&point)
                    void var_14
                    sub_42b31c(arg1, &point, &var_14)
                    sub_42f140(arg1, 0)
                    
                    if (edi.w == 0)
                        if ((arg1[8].b & 0x10) == 0)
                            edi.w = arg1[0x1a].w
                        else
                            edi.w = 0xfffe
                
                if (edi.w != 0)
                    HCURSOR result = SetCursor(sub_44763c(*data_530a18, sx.d(edi.w)))
                    *(arg2 + 0xc) = 1
                    return result
        else if (*(arg2 + 0xa) == 0x201 && *(*data_530660 + 0x24) != 0
                && GetLastActivePopup(*(*data_530660 + 0x24)) != GetForegroundWindow())
            return sub_448eb0(*data_530660)
    
    return (*(*arg1 - 0x10))()
}
