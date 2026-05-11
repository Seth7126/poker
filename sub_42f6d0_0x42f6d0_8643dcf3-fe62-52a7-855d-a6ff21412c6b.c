// ============================================================
// 函数名称: sub_42f6d0
// 虚拟地址: 0x42f6d0
// WARP GUID: 8643dcf3-fe62-52a7-855d-a6ff21412c6b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: IntersectClipRect, CreateSolidBrush, SaveDC, FrameRect, RectVisible, DeleteObject, RestoreDC
// [内部子函数调用]: sub_42c754, sub_410524, sub_40faac, sub_41842c, sub_42a26c, sub_410580
// [被调用的父级函数]: sub_42f578, sub_42bc94
// ============================================================

BOOL __convention("regparm")sub_42f6d0(void* arg1, HDC arg2, int32_t arg3)
{
    // 第一条实际指令: if (*(arg1 + 0x144) != 0 && *(arg1 + 0x17c) != 0 && *(arg1 + 0x148) != 0)
    if (*(arg1 + 0x144) != 0 && *(arg1 + 0x17c) != 0 && *(arg1 + 0x148) != 0)
        (*(**(arg1 + 0x148) + 0x20))()
    
    void* eax_1 = *(arg1 + 0x134)
    void var_20
    
    if (eax_1 != 0)
        int32_t i = 0
        
        if (arg3 != 0)
            i = sub_410580(eax_1, arg3)
            
            if (i s< 0)
                i = 0
        
        for (int32_t eax_4 = *(*(arg1 + 0x134) + 8); i s< eax_4; i += 1)
            void* eax_6 = sub_410524(*(arg1 + 0x134), i)
            
            if (*(eax_6 + 0x47) != 0)
            label_42f77e:
                sub_40faac(*(eax_6 + 0x30) + *(eax_6 + 0x38), *(eax_6 + 0x34), *(eax_6 + 0x30), 
                    &var_20, *(eax_6 + 0x34) + *(eax_6 + 0x3c))
                
                if (RectVisible(arg2, &var_20) != 0)
                    if ((*(arg1 + 0x44) & 0x80) != 0)
                        *(eax_6 + 0x44) |= 0x80
                    
                    int32_t nSavedDC = SaveDC(arg2)
                    sub_42a26c(arg2, *(eax_6 + 0x30), *(eax_6 + 0x34))
                    IntersectClipRect(arg2, 0, 0, *(eax_6 + 0x38), *(eax_6 + 0x3c))
                    sub_42c754(eax_6, 0)
                    RestoreDC(arg2, nSavedDC)
                    *(eax_6 + 0x44) &= 0xff7f
            else if ((*(eax_6 + 0x20) & 0x10) != 0 && (*(eax_6 + 0x41) & 4) == 0)
                goto label_42f77e
    
    BOOL result = *(arg1 + 0x180)
    
    if (result != 0)
        result = *(result + 8) - 1
        
        if (result s>= 0)
            void* i_2 = result + 1
            int32_t edi_1 = 0
            void* i_1
            
            do
                result = sub_410524(*(arg1 + 0x180), edi_1)
                
                if (*(result + 0x138) != 0 && (*(result + 0x40) & 0x10) != 0)
                    if (*(result + 0x47) != 0)
                    label_42f85e:
                        HBRUSH eax_20 = CreateSolidBrush(sub_41842c(0x80000010))
                        sub_40faac(*(result + 0x30) + *(result + 0x38), *(result + 0x34) - 1, 
                            *(result + 0x30) - 1, &var_20, *(result + 0x34) + *(result + 0x3c))
                        FrameRect(arg2, &var_20, eax_20)
                        DeleteObject(eax_20)
                        HBRUSH eax_28 = CreateSolidBrush(sub_41842c(0x80000014))
                        sub_40faac(*(result + 0x30) + *(result + 0x38) + 1, *(result + 0x34), 
                            *(result + 0x30), &var_20, *(result + 0x34) + *(result + 0x3c) + 1)
                        FrameRect(arg2, &var_20, eax_28)
                        result = DeleteObject(eax_28)
                    else if ((*(result + 0x20) & 0x10) != 0 && (*(result + 0x41) & 4) == 0)
                        goto label_42f85e
                
                edi_1 += 1
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    
    return result
}
