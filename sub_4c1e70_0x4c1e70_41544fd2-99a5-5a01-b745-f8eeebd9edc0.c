// ============================================================
// 函数名称: sub_4c1e70
// 虚拟地址: 0x4c1e70
// WARP GUID: 41544fd2-99a5-5a01-b745-f8eeebd9edc0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4746a0, sub_408e1c, sub_4c2d7c, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_4c62e8
// ============================================================

int32_tsub_4c1e70()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 0
    void* var_c = nullptr
    int32_t var_10 = 0
    void* var_14 = nullptr
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t edi
    int32_t var_20 = edi
    int32_t* var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t i_1 = *data_5300d0
    
    if (i_1 s> 0)
        int32_t ebx_1 = 1
        int32_t i
        
        do
            if (sub_4c2d7c(ebx_1) != 0)
                int32_t eax_3 = ebx_1 * 0x41
                bool o_1 = unimplemented  {imul eax, ebx, 0x41}
                
                if (o_1)
                    sub_403010()
                    noreturn
                
                int32_t edx_2 = *data_5301f4
                int32_t edi_1 = *(*data_5301f4 + 0x21104)
                int32_t edi_2 = edi_1 - *(edx_2 + (eax_3 << 3) + 0x1fea4)
                
                if (add_overflow(edi_1, neg.d(*(edx_2 + (eax_3 << 3) + 0x1fea4))))
                    sub_403010()
                    noreturn
                
                if (edi_2 s< 0 || edi_2 s> 0x3a98)
                    sub_408e1c(edi_2, &var_8)
                    int32_t var_30_1 = var_8
                    sub_408e1c(ebx_1, &var_c)
                    sub_4746a0(var_c, 0xb, *data_530304, 0x4c1fa4, 0x4c1fa4)
            
            ebx_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (*(*data_5301f4 + 0x210f8) s<= 0)
        sub_408e1c(*(*data_5301f4 + 0x210f8), &var_10)
        int32_t var_30_2 = var_10
        sub_408e1c(*(*data_5301f4 + 0x10020), &var_14)
        sub_4746a0(var_14, 0xc, *data_530304, 0x4c1fa4, 0x4c1fa4)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_24_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_4c1f9c
    return sub_403e1c(&var_14, 4)
}
