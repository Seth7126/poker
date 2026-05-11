// ============================================================
// 函数名称: sub_4c5eb0
// 虚拟地址: 0x4c5eb0
// WARP GUID: b500d536-6dd0-566c-bcfc-0e33fe7b1138
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47ab08, sub_4c2f1c, sub_5223e8, sub_404754, sub_404688, sub_40401c, sub_403010, sub_50a53c, sub_40496c, sub_509d44, sub_512ce8, sub_52ac40, sub_4c0924
// [被调用的父级函数]: sub_4c62e8
// ============================================================

char*sub_4c5eb0()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_48 = ebx
    int32_t esi
    int32_t var_4c = esi
    int32_t edi
    int32_t var_50 = edi
    char var_44
    sub_404688(&var_44, sub_51859c)
    int32_t* var_54 = &var_4
    int32_t (* var_58)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t i_2 = *data_5300d0
    
    if (i_2 s> 0)
        esi = 1
        void var_30
        void* ebx_1 = &var_30
        int32_t i
        
        do
            bool o_1 = unimplemented  {imul eax, esi, 0x41}
            
            if (o_1)
                sub_403010()
                noreturn
            
            int32_t eax_2 = *(*data_5301f4 + esi * 0x208 + 0x2008c)
            int32_t edx_3 = esi * 0x41
            bool o_2 = unimplemented  {imul edx, esi, 0x41}
            
            if (o_2)
                sub_403010()
                noreturn
            
            int32_t ecx_2 = *data_5301f4
            
            if (add_overflow(eax_2, neg.d(*(ecx_2 + (edx_3 << 3) + 0x1fea4))))
                sub_403010()
                noreturn
            
            *ebx_1 = eax_2 - *(ecx_2 + (edx_3 << 3) + 0x1fea4)
            bool o_4 = unimplemented  {imul eax, esi, 0x41}
            
            if (o_4)
                sub_403010()
                noreturn
            
            if (*(*data_5301f4 + esi * 0x208 + 0x20085) != 0)
                bool o_5 = unimplemented  {imul edx, dword [ebp-0x3c], 0x41}
                
                if (o_5)
                    sub_403010()
                    noreturn
                
                int32_t ecx_4 = *data_5301f4
                ecx_2 = sub_40401c(ecx_4, ecx_4 + esi * 0x208 + 0x1ff45)
            
            if (*(*data_530304 + 0xcf9) != 0)
                sub_52ac40(*data_5302c4, *ebx_1, ecx_2)
            
            esi += 1
            ebx_1 += 4
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    if (sub_4c0924() != 0)
        i_2 = *data_5300d0
        
        if (i_2 s> 0)
            esi = 1
            int32_t i_1
            
            do
                if (sub_512ce8(*data_530454, esi) == 0)
                    int32_t eax_15 = sub_50a53c(esi) * 0xe9
                    bool o_6 = unimplemented  {imul eax, eax, 0xe9}
                    
                    if (o_6)
                        sub_403010()
                        noreturn
                    
                    if (*(*data_530454 + (eax_15 << 2) + 0x18c) == 0 && sub_4c2f1c(esi) != 0)
                        int32_t eax_20 = sub_50a53c(esi) * 0xe9
                        bool o_7 = unimplemented  {imul eax, eax, 0xe9}
                        
                        if (o_7)
                            sub_403010()
                            noreturn
                        
                        *(*data_530454 + (eax_20 << 2) + 0x18c) = sub_509d44()
                        int32_t eax_25 = sub_50a53c(esi) * 0xe9
                        bool o_8 = unimplemented  {imul eax, eax, 0xe9}
                        
                        if (o_8)
                            sub_403010()
                            noreturn
                        
                        bool o_9 = unimplemented  {imul edx, esi, 0x41}
                        
                        if (o_9)
                            sub_403010()
                            noreturn
                        
                        *(*data_5301f4 + esi * 0x208 + 0x20090) =
                            *(*data_530454 + (eax_25 << 2) + 0x18c)
                
                esi += 1
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    
    long double x87_r0
    sub_47ab08(*data_530304, *data_530040, 2, x87_r0, nullptr)
    var_44 = 0
    sub_40496c(data_530a3c, &var_44, sub_51859c)
    sub_5223e8(*data_5301f4, &var_44, 0, esi, i_2)
    int32_t var_8
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_4c60d1
    char* result = &var_44
    sub_404754(result, sub_51859c)
    return result
}
