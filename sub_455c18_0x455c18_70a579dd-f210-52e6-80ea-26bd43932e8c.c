// ============================================================
// 函数名称: sub_455c18
// 虚拟地址: 0x455c18
// WARP GUID: 70a579dd-f210-52e6-80ea-26bd43932e8c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_455e3c
// ============================================================

uint32_t __convention("regparm")sub_455c18(int32_t* arg1, int32_t arg2, uint32_t arg3)
{
    // 第一条实际指令: uint32_t result
    uint32_t result
    
    if (*(arg1 + 0x13a) != 1)
        int32_t eax_3 = *(arg1 + 0x13a)
        
        if (eax_3 s<= 0 || eax_3 s> 4)
            void* eax_4 = *arg1
            *(eax_4 + 0x14) = 0x18
            *(eax_4 + 0x18) = *(arg1 + 0x13a)
            *(eax_4 + 0x1c) = 4
            (**arg1)(arg3)
        
        int32_t ecx_2 = *(arg1 + 0x126) << 3
        *(arg1 + 0x14e) = divs.dp.d(sx.q(ecx_2 + arg1[6] - 1), ecx_2)
        int32_t ecx_4 = *(arg1 + 0x12a) << 3
        *(arg1 + 0x152) = divs.dp.d(sx.q(ecx_4 + arg1[7] - 1), ecx_4)
        *(arg1 + 0x156) = 0
        int32_t i = 0
        result = arg1 + 0x13e
        uint32_t result_1 = result
        
        while (i s< *(arg1 + 0x13a))
            void* ecx_5 = *result_1
            *(ecx_5 + 0x34) = *(ecx_5 + 8)
            int32_t eax_17 = *(ecx_5 + 0xc)
            *(ecx_5 + 0x38) = eax_17
            *(ecx_5 + 0x3c) = *(ecx_5 + 0x34) * eax_17
            *(ecx_5 + 0x40) = *(ecx_5 + 0x34) * *(ecx_5 + 0x24)
            uint32_t edi_1 = *(ecx_5 + 0x34)
            uint32_t eax_21 = modu.dp.d(0:(*(ecx_5 + 0x1c)), edi_1)
            
            if (eax_21 == 0)
                eax_21 = edi_1
            
            *(ecx_5 + 0x44) = eax_21
            uint32_t edi_2 = *(ecx_5 + 0x38)
            uint32_t eax_23 = modu.dp.d(0:(*(ecx_5 + 0x20)), edi_2)
            
            if (eax_23 == 0)
                eax_23 = edi_2
            
            *(ecx_5 + 0x48) = eax_23
            uint32_t result_3 = *(ecx_5 + 0x3c)
            
            if (*(arg1 + 0x156) + result_3 s> 0xa)
                *(*arg1 + 0x14) = 0xb
                (**arg1)(result_1)
            
            while (true)
                result = result_3
                result_3 -= 1
                
                if (result s<= 0)
                    break
                
                int32_t ecx_6 = *(arg1 + 0x156)
                *(arg1 + 0x156) += 1
                *(&arg1[ecx_6] + 0x15a) = i
            
            i += 1
            result_1 += 4
    else
        void* ecx = *(arg1 + 0x13e)
        *(arg1 + 0x14e) = *(ecx + 0x1c)
        *(arg1 + 0x152) = *(ecx + 0x20)
        *(ecx + 0x34) = 1
        *(ecx + 0x38) = 1
        *(ecx + 0x3c) = 1
        *(ecx + 0x40) = *(ecx + 0x24)
        *(ecx + 0x44) = 1
        uint32_t result_2 = *(ecx + 0xc)
        result = modu.dp.d(0:(*(ecx + 0x20)), result_2)
        
        if (result == 0)
            result = result_2
        
        *(ecx + 0x48) = result
        *(arg1 + 0x156) = 1
        *(arg1 + 0x15a) = 0
    
    return result
}
