// ============================================================
// 函数名称: sub_46ea8b
// 虚拟地址: 0x46ea8b
// WARP GUID: 235b27f7-3089-52ab-8127-6858e8bd88d6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47a180, sub_480418, sub_403e4c, sub_47a100, sub_47a9a0, sub_403898, sub_403df8, sub_403e1c, sub_403010
// [被调用的父级函数]: 无
// ============================================================

void*sub_46ea8b(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: void* ebx = arg1[-1] + 0xce8
    void* ebx = arg1[-1] + 0xce8
    *(arg1[-1] + 0xe20) = 0x226
    *(arg1[-1] + 0xe24) = 0xfa
    *(arg1[-1] + 0xe28) = 0x32
    sub_403e4c(ebx + 0x15c, "Arial")
    __builtin_memcpy(ebx + 0x360, 
        "\x00\x00\xc6\x42\x00\x00\xc6\x42\x00\x00\xc6\x42\x00\x00\xc6\x42\x00\x00\xc6\x42\x00\x00\xc6\x42\x"
    "00\x00\xc6\x42\x00\x00\xc6\x42\x00\x00\xc6\x42\x00\x00\xc6\x42\x00\x00\xc6\x42\x00\x00\xc6\x42\x00"
    "00\x48\x42\x00\x00\x48\x42\x00\x00\x48\x42\x00\x00\x48\x42\x00\x00\x48\x42\x00\x00\x48\x42\x00\x00"
    "48\x42\x00\x00\x48\x42", 
        0x50)
    sub_403e4c(ebx + 0x160, "data\openvc")
    *(ebx + 0x164) = 0x3f800000
    *(ebx + 0x468) = 1
    *(arg1[-1] + 0xdf8) = 0
    *(arg1[-1] + 0xdf9) = 0
    
    if (*(arg1[-1] + 0xe1c) == 1)
        sub_480418(arg1[-1], *(arg1[-1] + 0xe3c))
    
    sub_47a100(*(ebx + 0x44c), *(ebx + 0x3ec), arg1[-1], ebx + 0xc8)
    sub_47a9a0(*(ebx + 0x45c), *(ebx + 0x3ec), arg1[-1], ebx + 0xcc)
    sub_47a9a0(*(ebx + 0x448), *(ebx + 0x3ec), arg1[-1], ebx + 0xd0)
    sub_47a9a0(*(ebx + 0x464), *(ebx + 0x3ec), arg1[-1], ebx + 0xd4)
    
    if (*(ebx + 0xd4) == 0)
        *(ebx + 0xd4) = 1
    
    sub_47a9a0(*(ebx + 0x478), *(ebx + 0x3ec), arg1[-1], ebx + 0xd8)
    *(ebx + 0xdc) = 3
    sub_47a9a0(*(ebx + 0x480), *(ebx + 0x3ec), arg1[-1], ebx + 0xe0)
    sub_47a9a0(*(ebx + 0x484), *(ebx + 0x3ec), arg1[-1], ebx + 0xe8)
    sub_47a9a0(*(ebx + 0x488), *(ebx + 0x3ec), arg1[-1], ebx + 0xf0)
    sub_47a9a0(*(ebx + 0x48c), *(ebx + 0x3ec), arg1[-1], ebx + 0xf8)
    
    if (add_overflow(7, neg.d(*(ebx + 0xe0))))
        sub_403010()
        noreturn
    
    *(ebx + 0xe0) = 7 - *(ebx + 0xe0)
    
    if (add_overflow(7, neg.d(*(ebx + 0xe8))))
        sub_403010()
        noreturn
    
    *(ebx + 0xe8) = 7 - *(ebx + 0xe8)
    
    if (add_overflow(7, neg.d(*(ebx + 0xf0))))
        sub_403010()
        noreturn
    
    *(ebx + 0xf0) = 7 - *(ebx + 0xf0)
    int32_t eax_31 = *(ebx + 0xd4)
    *(ebx + 0xcc)
    int32_t edx_11 = *(ebx + 0xcc) * 2
    bool o_3 = unimplemented  {imul edx, dword [ebx+0xcc], 0x2}
    
    if (o_3)
        sub_403010()
        noreturn
    
    int32_t eax_32 = eax_31 + edx_11
    
    if (add_overflow(eax_31, edx_11))
        sub_403010()
        noreturn
    
    *(ebx + 0xd0)
    int32_t edx_12 = *(ebx + 0xd0) * 0xa
    bool o_5 = unimplemented  {imul edx, dword [ebx+0xd0], 0xa}
    
    if (o_5)
        sub_403010()
        noreturn
    
    if (add_overflow(eax_32, edx_12))
        sub_403010()
        noreturn
    
    *(ebx + 0x104) = eax_32 + edx_12
    *(ebx + 0x10c) = *(ebx + 0xd4)
    
    if (*(ebx + 0xc8) != 0)
        int32_t temp11_1 = *(ebx + 0x10c)
        *(ebx + 0x10c) += 0x64
        
        if (add_overflow(temp11_1, 0x64))
            sub_403010()
            noreturn
    
    if (*(ebx + 0xc8) != 0)
        *(ebx + 0x104)
        bool o_8 = unimplemented  {imul eax, dword [ebx+0x104], 0x2}
        
        if (o_8)
            sub_403010()
            noreturn
        
        *(ebx + 0x104) *= 2
    
    int32_t eax_36
    
    if (*(ebx + 0x100) != *(ebx + 0x104) || *(ebx + 0xfc) != *(ebx + 0xf8))
        eax_36.b = 1
    else
        int32_t eax_37 = *(ebx + 0xf4)
        *(ebx + 0xe4)
        int32_t edx_13 = *(ebx + 0xe4) * 0xa
        bool o_9 = unimplemented  {imul edx, dword [ebx+0xe4], 0xa}
        
        if (o_9)
            sub_403010()
            noreturn
        
        int32_t eax_38 = eax_37 + edx_13
        
        if (add_overflow(eax_37, edx_13))
            sub_403010()
            noreturn
        
        *(ebx + 0xec)
        int32_t edx_14 = *(ebx + 0xec) * 0x64
        bool o_11 = unimplemented  {imul edx, dword [ebx+0xec], 0x64}
        
        if (o_11)
            sub_403010()
            noreturn
        
        if (add_overflow(eax_38, edx_14))
            sub_403010()
            noreturn
        
        int32_t edx_15 = *(ebx + 0xf0)
        *(ebx + 0xe0)
        int32_t ecx_9 = *(ebx + 0xe0) * 0xa
        bool o_13 = unimplemented  {imul ecx, dword [ebx+0xe0], 0xa}
        
        if (o_13)
            sub_403010()
            noreturn
        
        int32_t edx_16 = edx_15 + ecx_9
        
        if (add_overflow(edx_15, ecx_9))
            sub_403010()
            noreturn
        
        *(ebx + 0xe8)
        int32_t ecx_10 = *(ebx + 0xe8) * 0x64
        bool o_15 = unimplemented  {imul ecx, dword [ebx+0xe8], 0x64}
        
        if (o_15)
            sub_403010()
            noreturn
        
        if (add_overflow(edx_16, ecx_10))
            sub_403010()
            noreturn
        
        if (eax_38 + edx_14 != edx_16 + ecx_10)
            eax_36.b = 1
        else
            eax_36 = 0
    
    sub_47a180(*(ebx + 0x460), *(ebx + 0x3ec), arg1[-1], eax_36.b)
    
    if (*(arg1 - 5) != 0)
        *(ebx + 0x100) = *(ebx + 0x104)
        *(ebx + 0xfc) = *(ebx + 0xf8)
        *(ebx + 0xe4) = *(ebx + 0xe0)
        *(ebx + 0xec) = *(ebx + 0xe8)
        *(ebx + 0xf4) = *(ebx + 0xf0)
    
    if (*(ebx + 0xc8) == 0)
        *(ebx + 0xcc)
        bool o_17 = unimplemented  {imul eax, dword [ebx+0xcc], 0x3}
        
        if (o_17)
            sub_403010()
            noreturn
        
        if (*(*(arg1[-1] + 0xa24) + *(ebx + 0xcc) * 0xc) != *(arg1[-1] + 0xe2c))
            sub_47a180(*(ebx + 0x460), *(ebx + 0x3ec), arg1[-1], 1)
    
    sub_47a9a0(*(ebx + 0x47c), *(ebx + 0x3ec), arg1[-1], &arg1[-5])
    *(arg1[-1] + 0xdfb) = arg1[-5] s<= 1
    *(arg1[-1] + 0xdfa) = arg1[-5] s<= 2
    sub_403898(__return_addr)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    sub_403e1c(&arg1[-0x14], 8)
    sub_403e1c(&arg1[-8], 3)
    sub_403df8(&arg1[-3])
    *arg1
    return &arg1[-3]
}
