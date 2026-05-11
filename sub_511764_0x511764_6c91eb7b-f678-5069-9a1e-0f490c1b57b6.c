// ============================================================
// 函数名称: sub_511764
// 虚拟地址: 0x511764
// WARP GUID: 6c91eb7b-f678-5069-9a1e-0f490c1b57b6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_402b4c, sub_402bdc, sub_403010
// [被调用的父级函数]: sub_4c96bc, sub_511fd8, sub_514ef8
// ============================================================

void* __convention("regparm")sub_511764(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = sub_402b4c(float.t(arg2) * fconvert.t(1.5f))
    int32_t eax = sub_402b4c(float.t(arg2) * fconvert.t(1.5f))
    uint32_t eax_1 = GetTickCount()
    int32_t eax_3
    int32_t edx
    edx:eax_3 = sx.q(*(arg1 + 0x1dc))
    int32_t var_38_1 = eax_1 - eax_3
    int32_t var_34 = sbb.d(0, edx, eax_1 u< eax_3)
    
    if (var_38_1 s>= 0x3e8)
        *(arg1 + 0x1dc) = GetTickCount()
    
    int32_t eax_6
    int32_t edx_2
    eax_6, edx_2 = sub_402b4c(float.t(var_38_1) / fconvert.t(1000f))
    bool o = unimplemented  {adc edx, dword [esp+0x4]}
    
    if (o)
        sub_403010()
        noreturn
    
    void* result = *(arg1 + 0x348)
    
    if (result s> 0)
        void* var_18_1 = result
        int32_t ebx_1 = 1
        void* i
        
        do
            bool o_1 = unimplemented  {imul eax, ebx, 0xe9}
            
            if (o_1)
                sub_403010()
                noreturn
            
            int32_t j_2 = *(arg1 + ebx_1 * 0x3a4 + 0x17c)
            
            if (add_overflow(j_2, 0xffffffff))
                sub_403010()
                noreturn
            
            if (j_2 - 1 s>= 0)
                void* j_1 = j_2
                int32_t edi_1 = 0
                void* j
                
                do
                    bool o_3 = unimplemented  {imul eax, ebx, 0xe9}
                    
                    if (o_3)
                        sub_403010()
                        noreturn
                    
                    int32_t eax_13 = *(arg1 + ebx_1 * 0x3a4 + (edi_1 << 2) + 0x164)
                    
                    if (add_overflow(eax_13, neg.d(eax_6)))
                        sub_403010()
                        noreturn
                    
                    if (eax_13 - eax_6 s< 0x1e)
                        bool o_7 = unimplemented  {imul eax, ebx, 0xe9}
                        
                        if (o_7)
                            sub_403010()
                            noreturn
                        
                        if (*(arg1 + ebx_1 * 0x3a4 + (edi_1 << 2) + 0x164) s> 0x1e)
                            bool o_8 = unimplemented  {imul eax, ebx, 0xe9}
                            
                            if (o_8)
                                sub_403010()
                                noreturn
                            
                            *(arg1 + ebx_1 * 0x3a4 + (edi_1 << 2) + 0x164) = 0x1e
                    else
                        bool o_5 = unimplemented  {imul eax, ebx, 0xe9}
                        
                        if (o_5)
                            sub_403010()
                            noreturn
                        
                        void* eax_16 = arg1 + ebx_1 * 0x3a4
                        int32_t temp9_1 = *(eax_16 + (edi_1 << 2) + 0x164)
                        *(eax_16 + (edi_1 << 2) + 0x164) -= eax_6
                        
                        if (add_overflow(temp9_1, neg.d(eax_6)))
                            sub_403010()
                            noreturn
                    
                    bool o_9 = unimplemented  {imul eax, ebx, 0xe9}
                    
                    if (o_9)
                        sub_403010()
                        noreturn
                    
                    result = arg1 + ebx_1 * 0x3a4
                    int32_t temp10_1 = *(result + (edi_1 << 2) + 0x164)
                    *(result + (edi_1 << 2) + 0x164) -= eax
                    
                    if (add_overflow(temp10_1, neg.d(eax)))
                        sub_403010()
                        noreturn
                    
                    if (eax s> 0)
                        bool o_11 = unimplemented  {imul eax, ebx, 0xe9}
                        
                        if (o_11)
                            sub_403010()
                            noreturn
                        
                        if (*(arg1 + ebx_1 * 0x3a4 + (edi_1 << 2) + 0x164) s< 0)
                            bool o_12 = unimplemented  {imul eax, ebx, 0xe9}
                            
                            if (o_12)
                                sub_403010()
                                noreturn
                            
                            *(arg1 + ebx_1 * 0x3a4 + (edi_1 << 2) + 0x164) = 0
                            int32_t eax_25 = ebx_1 * 0xe9
                            bool o_13 = unimplemented  {imul eax, ebx, 0xe9}
                            
                            if (o_13)
                                sub_403010()
                                noreturn
                            
                            int32_t temp12_1 = *(arg1 + (eax_25 << 2) + 0x17c)
                            *(arg1 + (eax_25 << 2) + 0x17c) -= 1
                            
                            if (add_overflow(temp12_1, 0xffffffff))
                                sub_403010()
                                noreturn
                            
                            bool o_15 = unimplemented  {imul eax, ebx, 0xe9}
                            
                            if (o_15)
                                sub_403010()
                                noreturn
                            
                            int32_t eax_27 = *(arg1 + ebx_1 * 0x3a4 + 0x17c)
                            
                            if (add_overflow(eax_27, 0xffffffff))
                                sub_403010()
                                noreturn
                            
                            if (eax_27 - 1 s>= edi_1)
                                void* k_1 = eax_27 - 1 - edi_1 + 1
                                int32_t var_14_1 = edi_1
                                void* k
                                
                                do
                                    bool o_17 = unimplemented  {imul eax, dword [ebp-0x10], 0x41}
                                    
                                    if (o_17)
                                        sub_403010()
                                        noreturn
                                    
                                    bool o_18 = unimplemented  {imul edx, ebx, 0xe9}
                                    
                                    if (o_18)
                                        sub_403010()
                                        noreturn
                                    
                                    bool o_19 = unimplemented  {imul edx, dword [ebp-0x10], 0x41}
                                    
                                    if (o_19)
                                        sub_403010()
                                        noreturn
                                    
                                    bool o_20 = unimplemented  {imul ecx, ebx, 0xe9}
                                    
                                    if (o_20)
                                        sub_403010()
                                        noreturn
                                    
                                    void* ecx_2
                                    ecx_2.b = 0x40
                                    sub_402bdc(arg1 + ebx_1 * 0x3a4 + var_14_1 * 0x41 - 0x25, 
                                        arg1 + ebx_1 * 0x3a4 + var_14_1 * 0x41 + 0x1c, ecx_2.b)
                                    bool o_21 = unimplemented  {imul eax, ebx, 0xe9}
                                    
                                    if (o_21)
                                        sub_403010()
                                        noreturn
                                    
                                    bool o_22 = unimplemented  {imul edx, ebx, 0xe9}
                                    
                                    if (o_22)
                                        sub_403010()
                                        noreturn
                                    
                                    *(arg1 + ebx_1 * 0x3a4 + (var_14_1 << 2) + 0x164) =
                                        *(arg1 + ebx_1 * 0x3a4 + (var_14_1 << 2) + 0x168)
                                    var_14_1 += 1
                                    k = k_1
                                    k_1 -= 1
                                while (k != 1)
                    
                    edi_1 += 1
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            ebx_1 += 1
            i = var_18_1
            var_18_1 -= 1
        while (i != 1)
    
    char var_9
    result.b = var_9
    return result
}
