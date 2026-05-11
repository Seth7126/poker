// ============================================================
// 函数名称: sub_4600bc
// 虚拟地址: 0x4600bc
// WARP GUID: bcaacf30-6052-5ea9-89c1-7f66f404ecda
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_45fb84
// [被调用的父级函数]: sub_456060
// ============================================================

int32_t __convention("regparm")sub_4600bc(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: void* eax = *arg1
    void* eax = *arg1
    int32_t ebx = *(arg1 + 0x192)
    *(eax + 0x14) = 0x75
    *(eax + 0x18) = ebx
    *(eax + 0x1c) = arg2
    (*(*arg1 + 4))()
    
    while (true)
        int32_t edi_1
        
        if (ebx s< 0xc0)
            edi_1 = 2
        else if (ebx s< 0xd0 || ebx s> 0xd7)
            edi_1 = 3
        else if (ebx == ((arg2 + 1) & 7) + 0xd0 || ebx == ((arg2 + 2) & 7) + 0xd0)
            edi_1 = 3
        else if (ebx == ((arg2 - 1) & 7) + 0xd0 || ebx == ((arg2 - 2) & 7) + 0xd0)
            edi_1 = 2
        else
            edi_1 = 1
        
        void* eax_8 = *arg1
        *(eax_8 + 0x14) = 0x60
        *(eax_8 + 0x18) = ebx
        *(eax_8 + 0x1c) = edi_1
        (*(*arg1 + 4))()
        
        if (edi_1 == 1)
            break
        
        if (edi_1 == 2)
            if (sub_45fb84(arg1) == 0)
                return 0
            
            ebx = *(arg1 + 0x192)
        else
            if (edi_1 == 3)
                return 1
    
    *(arg1 + 0x192) = 0
    return 1
}
