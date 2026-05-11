// ============================================================
// 函数名称: sub_40327c
// 虚拟地址: 0x40327c
// WARP GUID: 89587bc9-a97f-5a79-958b-9fde5c3951c1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4032ac, sub_403308, sub_4032c4
// ============================================================

int32_t __convention("regparm")sub_40327c(void* arg1)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    int16_t entry_ebx
    
    while (true)
        int16_t* edi_1 = *(ebx - 0x30)
        
        if (edi_1 != 0)
            uint32_t i = zx.d(*edi_1)
            uint32_t i_1 = i
            void* edi_2 = &edi_1[1]
            bool cond:1_1 = edi_1 == 0xfffffffe
            
            while (i != 0)
                int16_t temp2_1 = *edi_2
                cond:1_1 = entry_ebx == temp2_1
                edi_2 += 2
                i -= 1
                
                if (entry_ebx == temp2_1)
                    break
            
            if (cond:1_1)
                uint32_t eax_3 = i_1 * 2 - i
                *(edi_2 + (eax_3 << 1) - 4)
                return eax_3
        
        void** ebx_1 = *(ebx - 0x24)
        
        if (ebx_1 == 0)
            break
        
        ebx = *ebx_1
    
    return entry_ebx
}
