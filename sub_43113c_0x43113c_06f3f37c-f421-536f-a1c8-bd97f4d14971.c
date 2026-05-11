// ============================================================
// 函数名称: sub_43113c
// 虚拟地址: 0x43113c
// WARP GUID: 06f3f37c-f421-536f-a1c8-bd97f4d14971
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4310a8, sub_440ee0, sub_42c754
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_43113c(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: *(arg2 + 0xc) = 1
    *(arg2 + 0xc) = 1
    char result = sub_4310a8(arg1, arg2)
    
    if (result == 0)
        if ((arg1[8].b & 0x10) == 0)
            *(arg2 + 4)
            sub_42c754(arg1, arg1)
            int32_t edi_1 = 0
            uint32_t eax_2 = zx.d(*(arg2 + 4))
            
            if (eax_2 s> 0x1b)
                if (eax_2 - 0x25 u< 4)
                    edi_1 = 1
                else if (eax_2 == 0x2b)
                    edi_1 = 4
            else if (eax_2 == 0x1b || eax_2 == 3)
                edi_1 = 4
            else if (eax_2 == 9)
                edi_1 = 2
            else if (eax_2 == 0xd)
                edi_1 = 4
            
            if (edi_1 != 0)
                *(arg2 + 4)
                sub_42c754(arg1, 0)
                sub_42c754(arg1, 0)
                int32_t eax_11 = *(arg2 + 8)
                int32_t* eax_13 = sub_440ee0(arg1)
                *(arg2 + 4)
                sub_42c754(eax_13, eax_11)
        
        result = 0
        *(arg2 + 0xc) = 0
    
    return result
}
