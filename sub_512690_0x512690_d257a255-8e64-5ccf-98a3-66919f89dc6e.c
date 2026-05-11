// ============================================================
// 函数名称: sub_512690
// 虚拟地址: 0x512690
// WARP GUID: d257a255-8e64-5ccf-98a3-66919f89dc6e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_47ab08, sub_50d454, sub_408e4c, sub_47a1c0, sub_404138, sub_4068a2, sub_403df8, sub_403e1c, sub_420b88, sub_403010
// [被调用的父级函数]: sub_4dad04
// ============================================================

int32_t __convention("regparm")sub_512690(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* var_8 = nullptr
    void* var_c = nullptr
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_403df8(&var_8)
    
    if (*(arg1 + 0x345) != 0 && sub_50d454(*(arg1 + 0xc)) != 0)
        int32_t var_2c_1 = 0
        int32_t eax_5
        int32_t edx_1
        edx_1:eax_5 = sx.q(*(*(arg1 + 0xc) + 0x3a78))
        uint32_t eax_6
        int32_t ecx_1
        eax_6, ecx_1 = GetTickCount()
        int32_t eax_9
        int32_t edx_2
        edx_2:eax_9 = sx.q(*(*(arg1 + 0xc) + 4))
        int32_t var_44_2 = eax_6 - eax_9
        bool o_1 = unimplemented  {sbb dword [esp+0x4], edx}
        int32_t eax_12
        int32_t edx_5
        eax_12, edx_5 = sub_4068a2(ecx_1, 
            sbb.d(edx_1, sbb.d(0, edx_2, eax_6 u< eax_9), eax_5 u< var_44_2), eax_5 - var_44_2, 0x3e8, 
            0)
        
        if (o_1)
            sub_403010()
            noreturn
        
        int32_t eax_13
        int32_t edx_6
        eax_13, edx_6 = sub_420b88(eax_12, edx_5, 0, 0x5127e8)
        int32_t var_24_1 = edx_6
        int32_t var_28_1 = eax_13
        sub_408e4c()
        void* var_24_2 = var_c
        void* const var_28_2 = &data_5127f8
        sub_404138(&var_8, 3)
    
    void* eax_15 = data_530a74
    *eax_15
    bool o_2 = unimplemented  {imul eax, dword [eax], 0x1038}
    
    if (o_2)
        sub_403010()
        noreturn
    
    void* edx_10 = data_5307f4
    *edx_10
    bool o_3 = unimplemented  {imul edx, dword [edx], 0x23}
    
    if (o_3)
        sub_403010()
        noreturn
    
    *(*(*data_530304 + 0xab0) + *eax_15 * 0x81c0 + *edx_10 * 0x118 - 0x74) = 0x40000000
    long double x87_r0
    sub_47ab08(*data_530304, *data_530a74, *data_5307f4, x87_r0, var_8)
    void* eax_21
    eax_21.b = var_8 != 0
    var_c = eax_21
    sub_47a1c0(*data_5307f4, *data_530a74, *data_530304, var_c.b)
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_5127d7
    return sub_403e1c(&var_c, 2)
}
