// ============================================================
// 函数名称: sub_4766f8
// 虚拟地址: 0x4766f8
// WARP GUID: 0d380e0c-90b0-5062-83e4-6bb0debae270
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_4765ac, sub_476478, sub_476690, sub_403010
// [被调用的父级函数]: sub_51dbe0, sub_50971c
// ============================================================

int32_t __convention("regparm")sub_4766f8(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t eax = *(arg1 + 0x8a0)
    bool o = unimplemented  {imul ecx, eax, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    if (*(*(arg1 + 0xab0) + eax * 0x81c0 + 0x8132) != 0)
        bool o_1 = unimplemented  {imul ecx, eax, 0x1038}
        
        if (o_1)
            sub_403010()
            noreturn
        
        int32_t ecx_3 = sx.d(*(*(arg1 + 0xab0) + eax * 0x81c0 + 0x8132)) - 1
        
        if (ecx_3 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_2 = unimplemented  {imul ecx, ecx, 0x23}
        
        if (o_2)
            sub_403010()
            noreturn
        
        bool o_3 = unimplemented  {imul eax, eax, 0x1038}
        
        if (o_3)
            sub_403010()
            noreturn
        
        *(*(arg1 + 0xab0) + eax * 0x81c0 + (ecx_3 + 1) * 0x118 - 0x87) = 0
        bool o_4 = unimplemented  {imul eax, eax, 0x1038}
        
        if (o_4)
            sub_403010()
            noreturn
        
        *(*(arg1 + 0xab0) + *(arg1 + 0x8a0) * 0x81c0 + 0x8132) = 0
    
    *(arg1 + 0x9b4) = arg3
    *(arg1 + 0x9b8) = arg2
    char eax_7 = sub_476690(arg1)
    char result
    
    if (eax_7 != 0)
        result = sub_4765ac(arg1)
    
    if (eax_7 == 0 || result == 0)
        while (true)
            int32_t eax_10
            int32_t* ecx_7
            eax_10, ecx_7 = sub_476478(arg1, 0, nullptr)
            *(arg1 + 0x9b4) = eax_10
            
            if (eax_10 == 0)
                char i
                
                do
                    int32_t temp0_1 = *(arg1 + 0x9b8)
                    *(arg1 + 0x9b8) -= 1
                    
                    if (add_overflow(temp0_1, 0xffffffff))
                        sub_403010()
                        noreturn
                    
                    if (*(arg1 + 0x9b8) s< 0)
                        *(arg1 + 0x9b8) = *(arg1 + 0xab4)
                    
                    ecx_7.b = 1
                    *(arg1 + 0x9b4) = sub_476478(arg1, 1, ecx_7)
                    i, ecx_7 = sub_476690(arg1)
                while (i == 0)
            
            if (sub_4765ac(arg1) != 0)
                result = sub_476690(arg1)
                
                if (result != 0)
                    break
    
    return result
}
