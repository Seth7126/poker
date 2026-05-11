// ============================================================
// 函数名称: sub_476830
// 虚拟地址: 0x476830
// WARP GUID: fd4b7fdc-29e9-5bd2-b4d3-d3b03f592af8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_4765ac, sub_4779d4, sub_476478, sub_476690, sub_403010
// [被调用的父级函数]: sub_475990
// ============================================================

void* __convention("regparm")sub_476830(void* arg1, char arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x8a0)
    int32_t eax = *(arg1 + 0x8a0)
    bool o = unimplemented  {imul edx, eax, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    if (*(*(arg1 + 0xab0) + eax * 0x81c0 + 0x8132) != 0)
        bool o_1 = unimplemented  {imul edx, eax, 0x1038}
        
        if (o_1)
            sub_403010()
            noreturn
        
        int32_t edx_3 = sx.d(*(*(arg1 + 0xab0) + eax * 0x81c0 + 0x8132)) - 1
        
        if (edx_3 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_2 = unimplemented  {imul edx, edx, 0x23}
        
        if (o_2)
            sub_403010()
            noreturn
        
        bool o_3 = unimplemented  {imul eax, eax, 0x1038}
        
        if (o_3)
            sub_403010()
            noreturn
        
        *(*(arg1 + 0xab0) + eax * 0x81c0 + (edx_3 + 1) * 0x118 - 0x87) = 0
        bool o_4 = unimplemented  {imul eax, eax, 0x1038}
        
        if (o_4)
            sub_403010()
            noreturn
        
        *(*(arg1 + 0xab0) + *(arg1 + 0x8a0) * 0x81c0 + 0x8132) = 0
    
    *(arg1 + 0x9bc) = arg2
    int32_t edx
    
    if (arg2 == 2)
        while (true)
            int32_t eax_6
            int32_t* ecx_3
            eax_6, ecx_3 = sub_476478(arg1, 0, nullptr)
            *(arg1 + 0x9b4) = eax_6
            
            if (eax_6 == 0)
                char i
                
                do
                    int32_t temp1_1 = *(arg1 + 0x9b8)
                    *(arg1 + 0x9b8) -= 1
                    
                    if (add_overflow(temp1_1, 0xffffffff))
                        sub_403010()
                        noreturn
                    
                    if (*(arg1 + 0x9b8) s< 0)
                        *(arg1 + 0x9b8) = *(arg1 + 0xab4)
                    
                    ecx_3.b = 1
                    *(arg1 + 0x9b4) = sub_476478(arg1, 1, ecx_3)
                    i, ecx_3 = sub_476690(arg1)
                while (i == 0)
            
            if (sub_4765ac(arg1) != 0)
                char eax_14
                eax_14, edx = sub_476690(arg1)
                
                if (eax_14 != 0)
                    break
    
    if (arg2 == 4)
        while (true)
            edx.b = 1
            int32_t eax_16
            int32_t* ecx_4
            eax_16, ecx_4 = sub_476478(arg1, edx.b, nullptr)
            *(arg1 + 0x9b4) = eax_16
            
            if (eax_16 == 0)
                char i_1
                
                do
                    int32_t temp3_1 = *(arg1 + 0x9b8)
                    *(arg1 + 0x9b8) += 1
                    
                    if (add_overflow(temp3_1, 1))
                        sub_403010()
                        noreturn
                    
                    if (*(arg1 + 0x9b8) s> *(arg1 + 0xab4))
                        *(arg1 + 0x9b8) = 1
                    
                    ecx_4.b = 1
                    *(arg1 + 0x9b4) = sub_476478(arg1, 0, ecx_4)
                    i_1, ecx_4 = sub_476690(arg1)
                while (i_1 == 0)
            
            char eax_22
            eax_22, edx = sub_4765ac(arg1)
            
            if (eax_22 != 0)
                char eax_24
                eax_24, edx = sub_476690(arg1)
                
                if (eax_24 != 0)
                    break
    
    return sub_4779d4(arg1, *(arg1 + 0x9b8), *(arg1 + 0x9b4))
}
