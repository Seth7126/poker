// ============================================================
// 函数名称: sub_5295d8
// 虚拟地址: 0x5295d8
// WARP GUID: 30a9e9b9-f26d-533d-9d3b-aee399750ad3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4d5ba0, sub_4d3e30, sub_47ab08, sub_47a180, sub_47a1c0, sub_4d36c4, sub_40401c, sub_403010, sub_4d5b64, sub_402bdc, sub_403df8, sub_4d5b1c
// [被调用的父级函数]: sub_529818
// ============================================================

void** __convention("regparm")sub_5295d8(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_1c = ebx
    int32_t esi
    int32_t var_20 = esi
    int32_t edi
    int32_t var_24 = edi
    void* var_18 = nullptr
    int32_t var_10 = arg3
    int32_t* var_28 = &var_4
    int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    bool o = unimplemented  {imul eax, dword [ebp-0x8], 0x41}
    
    if (o)
        sub_403010()
        noreturn
    
    char* ebx_1 = *data_5301f4 + arg2 * 0x208 + 0x1fea0
    ebx_1[2] = 0xb
    *ebx_1 = 2
    ebx_1[0xe] = 0
    ebx_1[0x1e5] = 0
    *(ebx_1 + 0x1ec) = 0
    *(ebx_1 + 0x200) = 0
    *(ebx_1 + 0x1fc) = 0
    *(ebx_1 + 0x204) = 0
    arg3.b = 4
    int32_t edx_1
    edx_1.b = 1
    sub_4d36c4(arg2, edx_1.b, arg3.b)
    bool o_1 = unimplemented  {imul eax, dword [ebp-0xc], 0x112}
    
    if (o_1)
        sub_403010()
        noreturn
    
    bool o_2 = unimplemented  {imul edx, dword [ebp+0x8], 0x22}
    
    if (o_2)
        sub_403010()
        noreturn
    
    int32_t esi_1 = *(arg1 + var_10 * 0x890 + arg4 * 0x110 + 0xa1c)
    int32_t ebx_2 = 0
    
    do
        int32_t i_1 = 0xa
        int32_t i
        
        do
            if (esi_1 s> 0 && esi_1 s>= sub_4d5ba0(ebx_2.b))
                sub_4d3e30(1, ebx_2.b, arg2, 0xffffffff)
                int32_t eax_8 = sub_4d5ba0(ebx_2.b)
                int32_t temp4_1 = esi_1
                esi_1 -= eax_8
                
                if (add_overflow(temp4_1, neg.d(eax_8)))
                    sub_403010()
                    noreturn
            
            i = i_1
            i_1 -= 1
        while (i != 1)
        ebx_2 += 1
    while (ebx_2.b != 5)
    
    ebx_2.b = 4
    
    if (esi_1 s> 0)
        while (true)
            if (esi_1 s< sub_4d5ba0(ebx_2.b))
                int32_t eax_10 = sub_4d5b1c(ebx_2.b)
                
                if (add_overflow(eax_10, 0xffffffff))
                    sub_403010()
                    noreturn
                
                ebx_2 = sub_4d5b64(eax_10 - 1)
            else
                sub_4d3e30(1, ebx_2.b, arg2, 0xffffffff)
                int32_t eax_17 = sub_4d5ba0(ebx_2.b)
                int32_t temp9_1 = esi_1
                esi_1 -= eax_17
                
                if (add_overflow(temp9_1, neg.d(eax_17)))
                    sub_403010()
                    noreturn
                
                if (esi_1 s<= 0)
                    break
    
    int32_t edi_1 = arg2 * 0x65
    bool o_6 = unimplemented  {imul edi, dword [ebp-0x8], 0x65}
    
    if (o_6)
        sub_403010()
        noreturn
    
    int32_t ebx_3 = var_10 * 0x112
    bool o_7 = unimplemented  {imul ebx, dword [ebp-0xc], 0x112}
    
    if (o_7)
        sub_403010()
        noreturn
    
    int32_t esi_2 = arg4 * 0x22
    bool o_8 = unimplemented  {imul esi, dword [ebp+0x8], 0x22}
    
    if (o_8)
        sub_403010()
        noreturn
    
    sub_402bdc(*data_5301f4 + edi_1 + 0x10e43, arg1 + (ebx_3 << 3) + (esi_2 << 3) + 0xa20, 0x64)
    *(*data_5301f4 + (arg2 << 2) + 0x111cc) = *(arg1 + (ebx_3 << 3) + (esi_2 << 3) + 0xb24)
    sub_40401c(arg2, *data_5301f4 + edi_1 + 0x10e43)
    long double x87_r0
    sub_47ab08(*data_530304, *data_530a74, *(data_52fed4 + (arg2 << 2)), x87_r0, var_18)
    sub_47a1c0(*(data_52fed4 + 4), *data_530a74, *data_530304, 1)
    sub_47a180(*(data_52fed4 + 4), *data_530a74, *data_530304, 1)
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_529809
    void** result = &var_18
    sub_403df8(result)
    return result
}
