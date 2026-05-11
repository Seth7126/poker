// ============================================================
// 函数名称: sub_4c51e4
// 虚拟地址: 0x4c51e4
// WARP GUID: f54dd451-a5b7-589e-8932-586598c55d9b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4cc6dc, sub_4c2f80, sub_52afd8, sub_4c2f1c, sub_528734, sub_4c5034, sub_403010
// [被调用的父级函数]: sub_5223e8
// ============================================================

int32_tsub_4c51e4()
{
    // 第一条实际指令: void* edi = data_5301f4
    void* edi = data_5301f4
    int32_t __saved_ebp
    int32_t* var_1c = &__saved_ebp
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax = sub_4c5034()
    *(*edi + 0x21108) = eax
    *(*edi + 0x210f0) = eax
    *(*edi + 0x210f4) = *(*edi + 0x21108)
    
    if (*(*edi + 0x2007d) != 0)
        void* eax_6 = *edi
        *(eax_6 + 0x21108)
        bool o_1 = unimplemented  {imul eax, dword [eax+0x21108], 0x2}
        
        if (o_1)
            sub_403010()
            noreturn
        
        *(*edi + 0x210f4) = *(eax_6 + 0x21108) * 2
    
    char var_5 = 0
    
    if (sub_4cc6dc(1) s< *(*edi + 0x21108) && *(*data_530304 + 0xcf9) == 0)
        var_5 = 1
    
    int32_t var_c = 0
    int32_t i_3 = *data_5300d0
    int32_t result
    
    if (i_3 s> 0)
        result = 1
        int32_t i
        
        do
            if (sub_4c2f1c(result) != 0)
                int32_t temp6_1 = var_c
                var_c += 1
                
                if (add_overflow(temp6_1, 1))
                    sub_403010()
                    noreturn
            
            result += 1
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t eax_14 = *data_5300d0
    
    if (add_overflow(eax_14, neg.d(var_c)))
        sub_403010()
        noreturn
    
    if (eax_14 - var_c s<= 1)
        int32_t eax_20
        
        if (*(*edi + 0x111f8) != 0)
            eax_20 = sub_528734(*data_5302c4)
        
        if (*(*edi + 0x111f8) == 0 || eax_20 s<= 1)
            var_5 = 1
            
            if (*(*data_530304 + 0xcf9) != 0)
                sub_4c2f80(0)
            
            if (*data_5300d0 != 8)
                int32_t i_5 = *data_5300d0
                
                if (i_5 s> 0)
                    result = 1
                    int32_t i_1
                    
                    do
                        bool o_9 = unimplemented  {imul eax, ebx, 0x41}
                        
                        if (o_9)
                            sub_403010()
                            noreturn
                        
                        if (*(*edi + result * 0x208 + 0x20090) == 3)
                            sub_52afd8(*data_5309d4, result, 1)
                        
                        bool o_10 = unimplemented  {imul eax, ebx, 0x41}
                        
                        if (o_10)
                            sub_403010()
                            noreturn
                        
                        if (*(*edi + result * 0x208 + 0x20090) == 2)
                            sub_52afd8(*data_5309d4, result, 2)
                        
                        bool o_11 = unimplemented  {imul eax, ebx, 0x41}
                        
                        if (o_11)
                            sub_403010()
                            noreturn
                        
                        if (*(*edi + result * 0x208 + 0x20090) u< 2)
                            sub_52afd8(*data_5309d4, result, 4)
                        
                        result += 1
                        i_1 = i_5
                        i_5 -= 1
                    while (i_1 != 1)
            else
                int32_t i_4 = *data_5300d0
                
                if (i_4 s> 0)
                    result = 1
                    int32_t i_2
                    
                    do
                        bool o_4 = unimplemented  {imul eax, ebx, 0x41}
                        
                        if (o_4)
                            sub_403010()
                            noreturn
                        
                        if (*(*edi + result * 0x208 + 0x20090) == 5)
                            sub_52afd8(*data_5309d4, result, 1)
                        
                        bool o_5 = unimplemented  {imul eax, ebx, 0x41}
                        
                        if (o_5)
                            sub_403010()
                            noreturn
                        
                        if (*(*edi + result * 0x208 + 0x20090) == 4)
                            sub_52afd8(*data_5309d4, result, 2)
                        
                        bool o_6 = unimplemented  {imul eax, ebx, 0x41}
                        
                        if (o_6)
                            sub_403010()
                            noreturn
                        
                        if (*(*edi + result * 0x208 + 0x20090) == 3)
                            sub_52afd8(*data_5309d4, result, 3)
                        
                        bool o_7 = unimplemented  {imul eax, ebx, 0x41}
                        
                        if (o_7)
                            sub_403010()
                            noreturn
                        
                        if (*(*edi + result * 0x208 + 0x20090) == 2)
                            sub_52afd8(*data_5309d4, result, 5)
                        
                        bool o_8 = unimplemented  {imul eax, ebx, 0x41}
                        
                        if (o_8)
                            sub_403010()
                            noreturn
                        
                        if (*(*edi + result * 0x208 + 0x20090) u< 2)
                            sub_52afd8(*data_5309d4, result, 8)
                        
                        result += 1
                        i_2 = i_4
                        i_4 -= 1
                    while (i_2 != 1)
    
    result.b = var_5
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
