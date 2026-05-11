// ============================================================
// 函数名称: sub_42bba4
// 虚拟地址: 0x42bba4
// WARP GUID: efb99611-b805-53dd-b273-fba1df16498a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: InvalidateRect
// [内部子函数调用]: sub_431bcc, sub_42bb18, sub_4318d0, sub_42b180
// [被调用的父级函数]: sub_42cfea, sub_42b128, sub_42bc30, sub_42e780, sub_42ae24, sub_42b9cc
// ============================================================

BOOL __convention("regparm")sub_42bba4(BOOL arg1, char arg2, char arg3)
{
    // 第一条实际指令: BOOL result
    BOOL result
    
    if (arg2 != 0)
    label_42bbc9:
        result = arg1
        
        if (*(result + 0x24) != 0)
            result = sub_431bcc(*(arg1 + 0x24))
            
            if (result.b != 0)
                void rect
                sub_42b180(arg1, &rect)
                BOOL eax_5
                int32_t __saved_ebp
                
                if (arg3 == 0 && (*(*(arg1 + 0x24) + 0x40) & 0x40) == 0)
                    eax_5 = sub_42bb18(&__saved_ebp)
                
                if (arg3 == 0 && (*(*(arg1 + 0x24) + 0x40) & 0x40) == 0 && eax_5.b == 0)
                    eax_5.b = 1
                else
                    eax_5 = 0
                
                char temp0_1 = eax_5.b
                eax_5.b = neg.b(eax_5.b)
                return InvalidateRect(sub_4318d0(*(arg1 + 0x24)), &rect, 
                    sbb.d(eax_5, eax_5, temp0_1 != 0))
    else
        result = arg1
        
        if ((*(result + 0x20) & 0x10) != 0)
            result = arg1
            
            if ((*(result + 0x41) & 4) == 0)
                goto label_42bbc9
    
    return result
}
