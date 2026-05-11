// ============================================================
// 函数名称: sub_476d24
// 虚拟地址: 0x476d24
// WARP GUID: c627a538-b59d-5554-b482-e513097f37f7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_42afdc, sub_42afb8, sub_42affc, sub_469d58, sub_42af98, sub_402b4c, sub_403010
// [被调用的父级函数]: sub_47c160
// ============================================================

void** __convention("regparm")sub_476d24(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t var_c = arg3
    int32_t* ebx = arg1
    arg1.b = var_c s< 0
    
    if (arg1.b != 0)
        int32_t temp1_1 = var_c
        var_c = neg.d(var_c)
        
        if (neg.d(temp1_1) == 0x80000000)
            sub_403010()
            noreturn
    
    bool o_2 = unimplemented  {imul eax, eax, 0x1038}
    
    if (o_2)
        sub_403010()
        noreturn
    
    int32_t edi = ebx[0x2ac] + arg2 * 0x81c0
    
    if (var_c - 1 u> 0x75)
        sub_403008()
        noreturn
    
    bool o_3 = unimplemented  {imul eax, eax, 0x23}
    
    if (o_3)
        sub_403010()
        noreturn
    
    int32_t eax_5
    eax_5.b = *(edi + var_c * 0x118 - 0xf8)
    char var_d = eax_5.b
    
    if (var_c - 1 u> 0x75)
        sub_403008()
        noreturn
    
    bool o_4 = unimplemented  {imul eax, eax, 0x23}
    
    if (o_4)
        sub_403010()
        noreturn
    
    void** result
    int32_t edx
    
    if (*(edi + var_c * 0x118 - 8) != 4)
        if (var_c - 1 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_9 = unimplemented  {imul eax, eax, 0x23}
        
        if (o_9)
            sub_403010()
            noreturn
        
        if (*(edi + var_c * 0x118 - 8) == 5)
            int32_t edx_7 = ebx[0xe]
            int32_t edx_8 = edx_7 + ebx[0x268]
            
            if (add_overflow(edx_7, ebx[0x268]))
                sub_403010()
                noreturn
            
            if (add_overflow(edx_8, neg.d(ebx[0x26a])))
                sub_403010()
                noreturn
            
            sub_42afdc(ebx, edx_8 - ebx[0x26a])
            int32_t edx_10 = ebx[0xf]
            int32_t edx_11 = edx_10 + ebx[0x269]
            
            if (add_overflow(edx_10, ebx[0x269]))
                sub_403010()
                noreturn
            
            if (add_overflow(edx_11, neg.d(ebx[0x26b])))
                sub_403010()
                noreturn
            
            arg3, edx = sub_42affc(ebx, edx_11 - ebx[0x26b])
            ebx[0x26a] = ebx[0x268]
            ebx[0x26b] = ebx[0x269]
            
            if (ebx[0xe] s< 0x190)
                result, arg3, edx = sub_42afdc(ebx, 0x190)
            
            if (ebx[0xf] s< 0x12c)
                result, arg3, edx = sub_42affc(ebx, 0x12c)
    else
        int32_t edx_1 = ebx[0xc]
        
        if (add_overflow(edx_1, ebx[0x268]))
            sub_403010()
            noreturn
        
        ebx[0x26a]
        
        if (add_overflow(edx_1 + ebx[0x268], neg.d(ebx[0x26a])))
            sub_403010()
            noreturn
        
        sub_42af98(ebx)
        int32_t edx_4 = ebx[0xd]
        
        if (add_overflow(edx_4, ebx[0x269]))
            sub_403010()
            noreturn
        
        ebx[0x26b]
        
        if (add_overflow(edx_4 + ebx[0x269], neg.d(ebx[0x26b])))
            sub_403010()
            noreturn
        
        result, arg3, edx = sub_42afb8(ebx)
    
    if (var_d == 9)
        if (var_c - 1 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_14 = unimplemented  {imul eax, eax, 0x23}
        
        if (o_14)
            sub_403010()
            noreturn
        
        int32_t eax_24 = sx.d(*(edi + var_c * 0x118 - 0x7c))
        
        if (add_overflow(eax_24, neg.d(*(edi + var_c * 0x118 - 0x94))))
            sub_403010()
            noreturn
        
        int32_t eax_26 = eax_24 - *(edi + var_c * 0x118 - 0x94) + 0x8000
        
        if (eax_26 u> 0xffff)
            sub_403008()
            noreturn
        
        *(edi + var_c * 0x118 - 0x84) = eax_26.w - 0x8000
        
        if (eax_26.w - 0x8000 s< 0)
            *(edi + var_c * 0x118 - 0x84) = 0
        
        int32_t eax_28 = *(edi + var_c * 0x118 - 0x9c)
        int32_t eax_29 = eax_28 - *(edi + var_c * 0x118 - 0x94)
        
        if (add_overflow(eax_28, neg.d(*(edi + var_c * 0x118 - 0x94))))
            sub_403010()
            noreturn
        
        if (eax_29 s< sx.d(*(edi + var_c * 0x118 - 0x84)))
            if (eax_29 + 0x8000 u> 0xffff)
                sub_403008()
                noreturn
            
            *(edi + var_c * 0x118 - 0x84) = (eax_29 + 0x8000).w - 0x8000
        
        int32_t eax_32 = *(edi + var_c * 0x118 - 0x9c)
        
        if (add_overflow(eax_32, neg.d(*(edi + var_c * 0x118 - 0x94))))
            sub_403010()
            noreturn
        
        int32_t eax_35 = sx.d(*(edi + var_c * 0x118 - 0x70)) - 1
        
        if (eax_35 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_18 = unimplemented  {imul eax, eax, 0x23}
        
        if (o_18)
            sub_403010()
            noreturn
        
        int32_t eax_38
        int32_t edx_14
        eax_38, edx_14 = sub_402b4c(float.t(*(edi + var_c * 0x118 - 0x84))
            / float.t(eax_32 - *(edi + var_c * 0x118 - 0x94))
            * float.t(*(edi + (eax_35 + 1) * 0x118 - 0x14)) + fconvert.t(0.5f))
        int32_t edx_15 = adc.d(edx_14, 0, eax_38 u>= 0xffff8000)
        bool cond:0_1 = edx_15 u<= 0
        
        if (edx_15 == 0)
            cond:0_1 = eax_38 + 0x8000 u<= 0xffff
        
        if (not(cond:0_1))
            sub_403008()
            noreturn
        
        int32_t edx_17 = sx.d(*(edi + var_c * 0x118 - 0x70)) - 1
        
        if (edx_17 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_19 = unimplemented  {imul edx, edx, 0x23}
        
        if (o_19)
            sub_403010()
            noreturn
        
        *(edi + (edx_17 + 1) * 0x118 - 0x84) = (eax_38 + 0x8000).w - 0x8000
        int32_t eax_42 = sx.d(*(edi + var_c * 0x118 - 0x70)) - 1
        
        if (eax_42 u> 0x75)
            sub_403008()
            noreturn
        
        int32_t eax_44 = (eax_42 + 1) * 0x23
        bool o_20 = unimplemented  {imul eax, eax, 0x23}
        
        if (o_20)
            sub_403010()
            noreturn
        
        if (*(edi + (eax_44 << 3) - 0x84) s< 1)
            if (sx.d(*(edi + var_c * 0x118 - 0x70)) - 1 u> 0x75)
                sub_403008()
                noreturn
            
            *(edi + (eax_44 << 3) - 0x84) = 1
        
        int32_t eax_46 = sx.d(*(edi + var_c * 0x118 - 0x70)) - 1
        
        if (eax_46 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_21 = unimplemented  {imul eax, eax, 0x23}
        
        if (o_21)
            sub_403010()
            noreturn
        
        int32_t eax_48
        eax_48.w = *(edi + (eax_46 + 1) * 0x118 - 0x84)
        int32_t edx_24 = sx.d(*(edi + var_c * 0x118 - 0x70)) - 1
        
        if (edx_24 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_22 = unimplemented  {imul edx, edx, 0x23}
        
        if (o_22)
            sub_403010()
            noreturn
        
        if (eax_48.w s> *(edi + (edx_24 + 1) * 0x118 - 0x14))
            int32_t eax_50 = sx.d(*(edi + var_c * 0x118 - 0x70)) - 1
            
            if (eax_50 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_23 = unimplemented  {imul eax, eax, 0x23}
            
            if (o_23)
                sub_403010()
                noreturn
            
            eax_48.w = *(edi + (eax_50 + 1) * 0x118 - 0x14)
            int32_t edx_28 = sx.d(*(edi + var_c * 0x118 - 0x70)) - 1
            
            if (edx_28 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_24 = unimplemented  {imul edx, edx, 0x23}
            
            if (o_24)
                sub_403010()
                noreturn
            
            *(edi + (edx_28 + 1) * 0x118 - 0x84) = eax_48.w
        
        eax_48.w = *(edi + var_c * 0x118 - 0x70)
        int32_t edx_34 = sx.d(*(edi + var_c * 0x118 - 0x70)) - 1
        
        if (edx_34 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_25 = unimplemented  {imul edx, edx, 0x23}
        
        if (o_25)
            sub_403010()
            noreturn
        
        if (sx.d(eax_48.w) - 1 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_26 = unimplemented  {imul eax, eax, 0x23}
        
        if (o_26)
            sub_403010()
            noreturn
        
        char var_114[0x100]
        result, arg3, edx, ebx, ebp_1 = sub_469d58(ebx, edi + sx.d(eax_48.w) * 0x118 - 0xf0, 0x19, 
            &var_114, sx.d(*(edi + (edx_34 + 1) * 0x118 - 0x84)), sx.d(eax_48.w), arg2)
    
    result.b = *(ebp_1 - 9)
    char temp15 = result.b
    result.b -= 0xe
    
    if (temp15 == 0xe)
        int32_t eax_58 = ebp_1[-2] - 1
        
        if (eax_58 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_27 = unimplemented  {imul eax, eax, 0x23}
        
        if (o_27)
            sub_403010()
            noreturn
        
        arg3.w = *(edi + (eax_58 + 1) * 0x118 - 0x80)
        edx.w = *(edi + (eax_58 + 1) * 0x118 - 0x7c)
        
        if (arg3.w != edx.w)
            int32_t edx_39 = sx.d(edx.w)
            int32_t ecx = sx.d(*(edi + (eax_58 + 1) * 0x118 - 0x80))
            
            if (add_overflow(edx_39, neg.d(ecx)))
                sub_403010()
                noreturn
            
            ebp_1[-4] = edx_39 - ecx
            *(edi + (eax_58 + 1) * 0x118 - 0x78) =
                fconvert.s(fconvert.t(*(edi + (eax_58 + 1) * 0x118 - 0x78)) - float.t(ebp_1[-4]))
            edx.w = *(edi + (eax_58 + 1) * 0x118 - 0x7c)
            *(edi + (eax_58 + 1) * 0x118 - 0x80) = edx.w
    
    result.b = *(ebp_1 - 9)
    char temp18 = result.b
    result.b -= 8
    
    if (temp18 == 8)
        int32_t eax_62 = ebp_1[-2] - 1
        
        if (eax_62 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_29 = unimplemented  {imul eax, eax, 0x23}
        
        if (o_29)
            sub_403010()
            noreturn
        
        edx.w = *(edi + (eax_62 + 1) * 0x118 - 0x80)
        result.w = *(edi + (eax_62 + 1) * 0x118 - 0x7c)
        
        if (edx.w != result.w)
            int32_t edx_40 = sx.d(*(edi + (eax_62 + 1) * 0x118 - 0x84))
            int32_t eax_64 = sx.d(result.w)
            int32_t edx_41 = edx_40 + eax_64
            
            if (add_overflow(edx_40, eax_64))
                sub_403010()
                noreturn
            
            int32_t eax_65 = sx.d(*(edi + (eax_62 + 1) * 0x118 - 0x80))
            
            if (add_overflow(edx_41, neg.d(eax_65)))
                sub_403010()
                noreturn
            
            if (edx_41 - eax_65 + 0x8000 u> 0xffff)
                sub_403008()
                noreturn
            
            *(edi + (eax_62 + 1) * 0x118 - 0x84) = (edx_41 - eax_65 + 0x8000).w - 0x8000
            eax_65.w = *(edi + (eax_62 + 1) * 0x118 - 0x7c)
            *(edi + (eax_62 + 1) * 0x118 - 0x80) = eax_65.w
            
            if (*(edi + (eax_62 + 1) * 0x118 - 0x84) s< 0)
                *(edi + (eax_62 + 1) * 0x118 - 0x84) = 0
            
            int32_t eax_66 = *(edi + (eax_62 + 1) * 0x118 - 0x98)
            int32_t eax_67 = eax_66 - *(edi + (eax_62 + 1) * 0x118 - 0x94)
            
            if (add_overflow(eax_66, neg.d(*(edi + (eax_62 + 1) * 0x118 - 0x94))))
                sub_403010()
                noreturn
            
            if (eax_67 s< sx.d(*(edi + (eax_62 + 1) * 0x118 - 0x84)))
                if (eax_67 + 0x8000 u> 0xffff)
                    sub_403008()
                    noreturn
                
                *(edi + (eax_62 + 1) * 0x118 - 0x84) = (eax_67 + 0x8000).w - 0x8000
            
            int32_t eax_70 = *(edi + (eax_62 + 1) * 0x118 - 0x98)
            
            if (add_overflow(eax_70, neg.d(*(edi + (eax_62 + 1) * 0x118 - 0x94))))
                sub_403010()
                noreturn
            
            int32_t eax_72 = eax_70 - *(edi + (eax_62 + 1) * 0x118 - 0x94) + 0x8000
            
            if (eax_72 u> 0xffff)
                sub_403008()
                noreturn
            
            *(edi + (eax_62 + 1) * 0x118 - 0x82) = eax_72.w - 0x8000
            int32_t eax_75 = sx.d(*(edi + (eax_62 + 1) * 0x118 - 0x70)) - 1
            
            if (eax_75 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_34 = unimplemented  {imul eax, eax, 0x23}
            
            if (o_34)
                sub_403010()
                noreturn
            
            int32_t eax_78 = sx.d(*(edi + (eax_75 + 1) * 0x118 - 0xc))
            int32_t edx_47 = sx.d(*(edi + (eax_62 + 1) * 0x118 - 0x70)) - 1
            
            if (edx_47 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_35 = unimplemented  {imul edx, edx, 0x23}
            
            if (o_35)
                sub_403010()
                noreturn
            
            int32_t edx_50 = sx.d(*(edi + (edx_47 + 1) * 0x118 - 0x82))
            result = eax_78 - edx_50
            
            if (add_overflow(eax_78, neg.d(edx_50)))
                sub_403010()
                noreturn
            
            if (result s> 0)
                long double x87_r7_8 = float.t(*(edi + (eax_62 + 1) * 0x118 - 0x84))
                    / float.t(*(edi + (eax_62 + 1) * 0x118 - 0x82))
                int32_t eax_80 = sx.d(*(edi + (eax_62 + 1) * 0x118 - 0x70)) - 1
                
                if (eax_80 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_37 = unimplemented  {imul eax, eax, 0x23}
                
                if (o_37)
                    sub_403010()
                    noreturn
                
                int32_t eax_83 = sx.d(*(edi + (eax_80 + 1) * 0x118 - 0xc))
                int32_t edx_52 = sx.d(*(edi + (eax_62 + 1) * 0x118 - 0x70)) - 1
                
                if (edx_52 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_38 = unimplemented  {imul edx, edx, 0x23}
                
                if (o_38)
                    sub_403010()
                    noreturn
                
                int32_t edx_55 = sx.d(*(edi + (edx_52 + 1) * 0x118 - 0x82))
                
                if (add_overflow(eax_83, neg.d(edx_55)))
                    sub_403010()
                    noreturn
                
                ebp_1[-4] = eax_83 - edx_55
                void* result_1
                int32_t edx_56
                result_1, edx_56 = sub_402b4c(x87_r7_8 * float.t(ebp_1[-4]))
                int32_t edx_57 = adc.d(edx_56, 0, result_1 u>= 0xffff8000)
                bool cond:1_1 = edx_57 u<= 0
                
                if (edx_57 == 0)
                    cond:1_1 = result_1 + 0x8000 u<= 0xffff
                
                if (not(cond:1_1))
                    sub_403008()
                    noreturn
                
                result = result_1
                int32_t edx_59 = sx.d(*(edi + (eax_62 + 1) * 0x118 - 0x70)) - 1
                
                if (edx_59 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_40 = unimplemented  {imul edx, edx, 0x23}
                
                if (o_40)
                    sub_403010()
                    noreturn
                
                *(edi + (edx_59 + 1) * 0x118 - 0x84) = result.w
    
    if (*(ebx + 0x952) != 0)
        ebp_1[-2]
        ebp_1[-1]
        ebx[0x255]
        result = ebx[0x254]()
    
    *ebp_1
    return result
}
