// ============================================================
// 函数名称: sub_4c0a50
// 虚拟地址: 0x4c0a50
// WARP GUID: e839cb9e-228b-5975-9710-7e4790f490bb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_406807, sub_402b4c, sub_403010
// [被调用的父级函数]: sub_5223e8, sub_51fdc8
// ============================================================

int32_t __convention("regparm")sub_4c0a50(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: *data_5300d0
    *data_5300d0
    
    if (arg2 == 0x50 || arg2 == 0xa0)
        *data_5300d0 = 8
    else if (arg2 == 0x1e || arg2 == 0x30)
        *data_5300d0 = 6
    else
        *data_5300d0 = arg2
    
    int32_t var_10
    
    if (arg2 s<= 0xa)
        bool o_1 = unimplemented  {imul eax, ebx, 0x5}
        
        if (o_1)
            sub_403010()
            noreturn
        
        var_10 = arg2 * 5
    else if (arg2 s> 0xa)
        var_10 = arg2
        int32_t eax_12 = arg2 s>> 1
        bool c_1 = unimplemented  {sar eax, 0x1}
        
        if (arg2 s>> 1 s< 0)
            eax_12 = adc.d(eax_12, 0, c_1)
        
        if (arg1 s> eax_12)
            int32_t eax_14 = arg2 s>> 1
            bool c_2 = unimplemented  {sar eax, 0x1}
            
            if (arg2 s>> 1 s< 0)
                eax_14 = adc.d(eax_14, 0, c_2)
            
            int32_t edx_1 = arg1 - eax_14
            
            if (add_overflow(arg1, neg.d(eax_14)))
                sub_403010()
                noreturn
            
            if (add_overflow(var_10, neg.d(edx_1)))
                sub_403010()
                noreturn
            
            var_10 = sub_402b4c(float.t(var_10 - edx_1))
            
            if (var_10 s< 0)
                var_10 = 0
    
    int32_t edi_1 = arg2 - arg1
    
    if (add_overflow(arg2, neg.d(arg1)))
        sub_403010()
        noreturn
    
    if (add_overflow(arg2, 0xffffffff))
        sub_403010()
        noreturn
    
    bool o_6 = add_overflow(var_10, 0x28)
    
    if (o_6)
        sub_403010()
        noreturn
    
    int32_t eax_22
    int32_t edx_2
    eax_22, edx_2 = sub_402b4c(float.t(edi_1) / float.t(arg2 - 1) * float.t(var_10 + 0x28))
    int32_t eax_23 = sub_406807(arg3, edx_2, eax_22, 0xa, 0)
    
    if (o_6)
        sub_403010()
        noreturn
    
    int32_t eax_24 = sub_402b4c(float.t(arg2) * data_4c0cb0)
    int32_t eax_25 = 0
    
    if (eax_24 s<= edi_1)
        if (add_overflow(edi_1, neg.d(eax_24)))
            sub_403010()
            noreturn
        
        eax_25 = (edi_1 - eax_24) * 0xa
        bool o_8 = unimplemented  {imul eax, eax, 0xa}
        
        if (o_8)
            sub_403010()
            noreturn
    
    if (arg2 s< 0xa)
        int32_t edx_4 = edi_1 * 0xa
        bool o_9 = unimplemented  {imul edx, edi, 0xa}
        
        if (o_9)
            sub_403010()
            noreturn
        
        int32_t temp13_1 = eax_25
        eax_25 += edx_4
        
        if (add_overflow(temp13_1, edx_4))
            sub_403010()
            noreturn
    
    if (arg2 s> 0xa && arg1 s<= *data_5300d0)
        int32_t edx_7 = *data_5300d0
        int32_t edx_8 = edx_7 - arg1
        
        if (add_overflow(edx_7, neg.d(arg1)))
            sub_403010()
            noreturn
        
        if (add_overflow(edx_8, 1))
            sub_403010()
            noreturn
        
        int32_t edx_10 = (edx_8 + 1) * 0x32
        bool o_13 = unimplemented  {imul edx, edx, 0x32}
        
        if (o_13)
            sub_403010()
            noreturn
        
        int32_t temp27_1 = eax_25
        eax_25 += edx_10
        
        if (add_overflow(temp27_1, edx_10))
            sub_403010()
            noreturn
        
        if (arg1 s<= 5)
            int32_t temp29_1 = eax_25
            eax_25 += 0x32
            
            if (add_overflow(temp29_1, 0x32))
                sub_403010()
                noreturn
        
        if (arg1 s<= 4)
            int32_t temp30_1 = eax_25
            eax_25 += 0x32
            
            if (add_overflow(temp30_1, 0x32))
                sub_403010()
                noreturn
        
        if (arg1 s<= 3)
            int32_t temp31_1 = eax_25
            eax_25 += 0x64
            
            if (add_overflow(temp31_1, 0x64))
                sub_403010()
                noreturn
        
        if (arg1 s<= 2)
            int32_t temp33_1 = eax_25
            eax_25 += 0x64
            
            if (add_overflow(temp33_1, 0x64))
                sub_403010()
                noreturn
        
        if (arg1 s<= 1)
            int32_t temp34_1 = eax_25
            eax_25 += 0x64
            
            if (add_overflow(temp34_1, 0x64))
                sub_403010()
                noreturn
    else if (arg2 s>= 6)
        if (arg1 s<= 3)
            int32_t temp17_1 = eax_25
            eax_25 += 0x32
            
            if (add_overflow(temp17_1, 0x32))
                sub_403010()
                noreturn
        
        if (arg1 s<= 2)
            int32_t temp22_1 = eax_25
            eax_25 += 0x32
            
            if (add_overflow(temp22_1, 0x32))
                sub_403010()
                noreturn
        
        if (arg1 s<= 1)
            int32_t temp26_1 = eax_25
            eax_25 += 0x64
            
            if (add_overflow(temp26_1, 0x64))
                sub_403010()
                noreturn
    else if (arg2 s>= 4)
        if (arg1 s<= 2)
            int32_t temp20_1 = eax_25
            eax_25 += 0xa
            
            if (add_overflow(temp20_1, 0xa))
                sub_403010()
                noreturn
        
        if (arg1 s<= 1)
            int32_t temp25_1 = eax_25
            eax_25 += 0x32
            
            if (add_overflow(temp25_1, 0x32))
                sub_403010()
                noreturn
    
    int32_t result = eax_25 + eax_23
    
    if (add_overflow(eax_25, eax_23))
        sub_403010()
        noreturn
    
    if (arg3 == 2)
        result *= 2
        bool o_26 = unimplemented  {imul eax, eax, 0x2}
        
        if (o_26)
            sub_403010()
            noreturn
    
    if (arg3 == 3)
        result *= 3
        bool o_27 = unimplemented  {imul eax, eax, 0x3}
        
        if (o_27)
            sub_403010()
            noreturn
    
    return result
}
