// ============================================================
// 函数名称: sub_462170
// 虚拟地址: 0x462170
// WARP GUID: 06fe7dfe-0382-5d5a-86b2-8eb345dd8430
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_462320
// ============================================================

int32_t __convention("regparm")sub_462170(int32_t* arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: if (*(arg1 + 0xe9) != 1)
    if (*(arg1 + 0xe9) != 1)
        int32_t eax_3 = *(arg1 + 0xe9)
        
        if (eax_3 s<= 0 || eax_3 s> 4)
            void* eax_4 = *arg1
            *(eax_4 + 0x14) = 0x18
            *(eax_4 + 0x18) = *(arg1 + 0xe9)
            *(eax_4 + 0x1c) = 4
            (**arg1)(arg3)
        
        int32_t ecx_2 = *(arg1 + 0xdd) << 3
        *(arg1 + 0xfd) = divs.dp.d(sx.q(ecx_2 + arg1[6] - 1), ecx_2)
        int32_t ecx_4 = *(arg1 + 0xe1) << 3
        *(arg1 + 0x101) = divs.dp.d(sx.q(ecx_4 + arg1[7] - 1), ecx_4)
        *(arg1 + 0x105) = 0
        int32_t i = 0
        void* var_10 = arg1 + 0xed
        
        while (i s< *(arg1 + 0xe9))
            void* ecx_5 = *var_10
            *(ecx_5 + 0x34) = *(ecx_5 + 8)
            int32_t eax_18 = *(ecx_5 + 0xc)
            *(ecx_5 + 0x38) = eax_18
            *(ecx_5 + 0x3c) = *(ecx_5 + 0x34) * eax_18
            *(ecx_5 + 0x40) = *(ecx_5 + 0x34) << 3
            uint32_t edi_1 = *(ecx_5 + 0x34)
            uint32_t eax_22 = modu.dp.d(0:(*(ecx_5 + 0x1c)), edi_1)
            
            if (eax_22 == 0)
                eax_22 = edi_1
            
            *(ecx_5 + 0x44) = eax_22
            uint32_t edi_2 = *(ecx_5 + 0x38)
            uint32_t eax_24 = modu.dp.d(0:(*(ecx_5 + 0x20)), edi_2)
            
            if (eax_24 == 0)
                eax_24 = edi_2
            
            *(ecx_5 + 0x48) = eax_24
            int32_t edi_3 = *(ecx_5 + 0x3c)
            
            if (*(arg1 + 0x105) + edi_3 s> 0xa)
                *(*arg1 + 0x14) = 0xb
                (**arg1)(var_10)
            
            while (true)
                int32_t eax_28 = edi_3
                edi_3 -= 1
                
                if (eax_28 s<= 0)
                    break
                
                int32_t ecx_6 = *(arg1 + 0x105)
                *(arg1 + 0x105) += 1
                *(&arg1[ecx_6] + 0x109) = i
            
            i += 1
            var_10 += 4
    else
        void* ecx = *(arg1 + 0xed)
        *(arg1 + 0xfd) = *(ecx + 0x1c)
        *(arg1 + 0x101) = *(ecx + 0x20)
        __builtin_memcpy(ecx + 0x34, 
            "\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x08\x00\x00\x00\x01\x00\x00\x00", 0x14)
        uint32_t esi = *(ecx + 0xc)
        uint32_t eax_2 = modu.dp.d(0:(*(ecx + 0x20)), esi)
        
        if (eax_2 == 0)
            eax_2 = esi
        
        *(ecx + 0x48) = eax_2
        *(arg1 + 0x105) = 1
        *(arg1 + 0x109) = 0
    
    int32_t result = arg1[0x31]
    
    if (result s> 0)
        result *= *(arg1 + 0xfd)
        
        if (result s>= 0xffff)
            result = 0xffff
        
        arg1[0x30] = result
    
    return result
}
