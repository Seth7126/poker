// ============================================================
// 函数名称: sub_509dc4
// 虚拟地址: 0x509dc4
// WARP GUID: de789f13-4329-529a-a504-f3ac954ac8dc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47ab08, sub_403e90, sub_47a1c0, sub_403df8, sub_50a4e0, sub_403010
// [被调用的父级函数]: sub_5168a7, sub_516c3c, sub_50b624
// ============================================================

void**sub_509dc4()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    void* var_c = nullptr
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t i_1 = *(*data_530454 + 0x348)
    
    if (i_1 s> 0)
        int32_t ebx_1 = 1
        int32_t i
        
        do
            if (ebx_1 != *(*data_530454 + 0x350))
                int32_t eax_4 = ebx_1 * 0xe9
                bool o_1 = unimplemented  {imul eax, ebx, 0xe9}
                
                if (o_1)
                    sub_403010()
                    noreturn
                
                int32_t edx_2
                edx_2.b = *(*data_530454 + (eax_4 << 2) - 0x50)
                
                if (edx_2.b - 1 u< 2)
                    *(*data_530454 + (eax_4 << 2) - 0x50) = 4
                    sub_403e90(&var_c, 0x509ed0)
                    void* eax_6 = var_c
                    int32_t eax_8 = sub_50a4e0(ebx_1)
                    long double x87_r0
                    ebx_1 = sub_47ab08(*data_530304, *data_530a74, *(data_52fed4 + (eax_8 << 2)), 
                        x87_r0, eax_6)
                    char eax_11 = (var_c != 0).b
                    int32_t eax_13 = sub_50a4e0(ebx_1)
                    sub_47a1c0(*(data_52fed4 + (eax_13 << 2)), *data_530a74, *data_530304, eax_11)
            
            ebx_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_18_1)(void* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4) =
        sub_509ebe
    void** result = &var_c
    sub_403df8(result)
    return result
}
