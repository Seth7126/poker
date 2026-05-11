// ============================================================
// 函数名称: sub_46195c
// 虚拟地址: 0x46195c
// WARP GUID: aa9f3a52-eca3-5f94-9893-741ccfcc9ccf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_46151c, sub_4615ec, sub_461518, sub_46143c
// [被调用的父级函数]: sub_461a84
// ============================================================

int32_t* __convention("regparm")sub_46195c(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[0x2b] == 0)
    if (arg1[0x2b] == 0)
        int32_t i = 0
        void* edi_1 = arg1 + 0xed
        
        while (i s< *(arg1 + 0xe9))
            void* esi_1 = *edi_1
            
            if (*(arg1 + 0xd9) == 0)
                sub_46143c(arg1, *(esi_1 + 0x14), 0)
                sub_46143c(arg1, *(esi_1 + 0x18), 1)
            else if (*(arg1 + 0x131) != 0)
                sub_46143c(arg1, *(esi_1 + 0x18), 1)
            else if (*(arg1 + 0x139) == 0)
                sub_46143c(arg1, *(esi_1 + 0x14), 0)
            
            i += 1
            edi_1 += 4
    
    if (arg1[0x30] != 0)
        sub_46151c(arg1)
    
    return sub_4615ec(arg1)
}
