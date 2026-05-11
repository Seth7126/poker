// ============================================================
// 函数名称: sub_51d840
// 虚拟地址: 0x51d840
// WARP GUID: fc8da851-4dd7-5fb0-9444-dc519417d566
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404138, sub_4042c0, sub_403e4c, sub_402824, j_sub_406190, sub_404280, sub_403e1c, sub_403010, sub_405e46, sub_403e90, sub_404188, sub_51d764, sub_405fdc, sub_40422c, sub_403df8, sub_405f4c, sub_404464, sub_406168, sub_408e80
// [被调用的父级函数]: sub_4d885c, sub_51d748, sub_51cc08
// ============================================================

int32_t __convention("regparm")sub_51d840(void* arg1, char* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_1fc = ebx
    int32_t esi
    int32_t var_200 = esi
    int32_t var_1f8
    __builtin_memset(&var_1f8, 0, 0x18)
    int32_t var_10 = 0
    int32_t var_14 = 0
    char* var_8 = nullptr
    sub_40422c(arg2)
    int32_t* var_204 = &var_4
    int32_t (* var_208)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_210 = *(*data_530304 + 0xa64)
    void* const var_214 = "\data\help\"
    char* var_1e4
    sub_404138(&var_1e4, 6, 0, ".txt", *(*data_530304 + 0x1354), 0x51db38)
    void var_1e0
    sub_405e46(&var_1e0, var_1e4)
    sub_403e4c(arg1 + 8, arg2)
    int32_t eax_8
    int32_t ecx
    eax_8, ecx = j_sub_406190()
    sub_402824(eax_8)
    void* eax_13
    
    do
        sub_404464(ecx, &var_10)
        sub_402824(sub_406168(&var_1e0))
        char* var_21c_1 = var_8
        int32_t var_220_1 = var_10
        void* const var_224_1 = &data_51db54
        sub_404138(&var_8, 3)
        eax_13, ecx = sub_405fdc(&var_1e0)
        sub_402824(eax_13)
    while (eax_13.b == 0)
    int32_t eax_15
    void* edx_3
    eax_15, edx_3 = sub_405f4c(&var_1e0)
    sub_402824(eax_15)
    int32_t* var_21c_2 = &var_4
    int32_t var_1e8
    int32_t* ebp_1 = sub_51d764(&var_1e8, edx_3)
    sub_403e4c(arg1 + 4, ebp_1[-0x79])
    *(arg1 + 0xc) = 0
    sub_403e4c(arg1 + 0x10, U"0")
    void* edx_5 = sub_403e4c(arg1 + 0x14, U"0")
    *(arg1 + 0x7f0) = 0
    *(arg1 + 0xfd8) = 0
    
    do
        int32_t temp1_1 = *(arg1 + 0x7f0)
        *(arg1 + 0x7f0) += 1
        
        if (add_overflow(temp1_1, 1))
            sub_403010()
            noreturn
        
        int32_t temp2_1 = *(arg1 + 0xfd8)
        *(arg1 + 0xfd8) += 1
        
        if (add_overflow(temp2_1, 1))
            sub_403010()
            noreturn
        
        *(arg1 + 0x7f0)
        bool o_3 = unimplemented  {imul eax, dword [esi+0x7f0], 0x5}
        
        if (o_3)
            sub_403010()
            noreturn
        
        void* ebx_1 = arg1 + *(arg1 + 0x7f0) * 0x14 + 0xc
        int32_t* var_21c_3 = ebp_1
        void* ebp_2 = sub_51d764(&ebp_1[-0x7a], edx_5)
        sub_403e90(ebp_2 - 0xc, *(ebp_2 - 0x1e8))
        *(ebx_1 + 0xc) = 0
        void* ebp_3
        
        while (true)
            int32_t edx_7 = *(ebx_1 + 0xc)
            
            if (add_overflow(edx_7, 1))
                sub_403010()
                noreturn
            
            sub_404280(1, edx_7 + 1, *(ebp_2 - 0xc), ebp_2 - 0x1ec)
            sub_404188(*(ebp_2 - 0x1ec), 0x51db6c)
            
            if (edx_7 != 0xffffffff)
                sub_4042c0(ebp_2 - 0xc, 1, *(ebx_1 + 0xc))
                int32_t eax_28
                void* edx_9
                eax_28, edx_9 = sub_408e80(*(ebp_2 - 0xc))
                *ebx_1 = eax_28
                void* var_21c_5 = ebp_2
                ebp_3 = sub_51d764(ebp_2 - 0x1f0, edx_9)
                sub_403e4c(ebx_1 + 4, *(ebp_3 - 0x1f0))
                break
            
            int32_t temp5_1 = *(ebx_1 + 0xc)
            *(ebx_1 + 0xc) += 1
            
            if (add_overflow(temp5_1, 1))
                sub_403010()
                noreturn
        
        if (*(ebx_1 + 0xc) s> 0)
            sub_403e90(ebp_3 - 0x10, *(ebx_1 + 4))
        
        void* var_21c_6 = ebp_3
        ebp_1 = sub_51d764(ebp_3 - 0x1f4, sub_403e4c(ebx_1 + 0x10, *(ebp_3 - 0x10)))
        sub_403e4c(ebx_1 + 8, ebp_1[-0x7d])
        *(arg1 + 0x7f0)
        bool o_6 = unimplemented  {imul eax, dword [esi+0x7f0], 0x5}
        
        if (o_6)
            sub_403010()
            noreturn
        
        void* ebx_2 = arg1 + *(arg1 + 0x7f0) * 0x14 + 0x7f4
        sub_403df8(ebx_2 + 4)
        *(ebx_2 + 8) = 0
        *(arg1 + 0x7f0)
        bool o_7 = unimplemented  {imul edx, dword [esi+0x7f0], 0x5}
        
        if (o_7)
            sub_403010()
            noreturn
        
        edx_5 = sub_403e4c(ebx_2, *(arg1 + *(arg1 + 0x7f0) * 0x14 + 0x10))
        *(arg1 + 0x7f0)
        bool o_8 = unimplemented  {imul eax, dword [esi+0x7f0], 0x5}
        
        if (o_8)
            sub_403010()
            noreturn
        
        *(ebx_2 + 0xc) = *(arg1 + *(arg1 + 0x7f0) * 0x14 + 0xc)
    while (ebp_1[-1] != 0)
    
    fsbase->NtTib.ExceptionList = arg2
    sub_403e1c(&ebp_1[-0x7d], 6)
    int32_t result = sub_403e1c(&ebp_1[-4], 4)
    *ebp_1
    return result
}
