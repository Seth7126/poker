// ============================================================
// 函数名称: sub_50a240
// 虚拟地址: 0x50a240
// WARP GUID: 01ea0509-9bb4-55c7-8f07-6466aa4c91ef
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4040c4, sub_404078, sub_408e1c, sub_404080, sub_403fa0, sub_403df8, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_51431c
// ============================================================

int32_t __convention("regparm")sub_50a240(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 0
    char* var_c = nullptr
    char* var_10 = nullptr
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t edi
    int32_t var_1c = edi
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_403df8(arg2)
    bool o = unimplemented  {imul eax, edi, 0x2345}
    
    if (o)
        sub_403010()
        noreturn
    
    sub_408e1c(*(data_5301b0 + arg1 * 0x8d14 - 0x39c), arg2)
    
    while (sub_404078(*arg2) s< 3)
        sub_4040c4(arg2, U"0", *arg2)
    
    bool o_1 = unimplemented  {imul eax, edi, 0x2345}
    
    if (o_1)
        sub_403010()
        noreturn
    
    int32_t eax_7 = *(data_5301b0 + arg1 * 0x8d14 - 0x39c)
    
    if (eax_7 s>= 0x19)
        int32_t i_1 = eax_7 - 0x18
        void* ebx_2 = data_5301b0 + 0x14b4
        int32_t i
        
        do
            bool o_2 = unimplemented  {imul edx, edi, 0x2345}
            
            if (o_2)
                sub_403010()
                noreturn
            
            int32_t edx_3
            edx_3.b = *(ebx_2 + arg1 * 0x8d14 - 0x8de8)
            sub_403fa0()
            sub_404080(arg2, var_c)
            bool o_3 = unimplemented  {imul edx, edi, 0x2345}
            
            if (o_3)
                sub_403010()
                noreturn
            
            int32_t edx_5
            edx_5.b = *(ebx_2 + arg1 * 0x8d14 - 0x8de7)
            sub_403fa0()
            sub_404080(arg2, var_10)
            ebx_2 += 0xd4
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_20_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_50a34a
    return sub_403e1c(&var_10, 2)
}
