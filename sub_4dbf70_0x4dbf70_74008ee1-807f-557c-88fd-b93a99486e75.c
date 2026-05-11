// ============================================================
// 函数名称: sub_4dbf70
// 虚拟地址: 0x4dbf70
// WARP GUID: 74008ee1-807f-557c-88fd-b93a99486e75
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40422c, sub_406010, sub_404078, sub_404188, sub_404080, sub_402824, sub_408e80, sub_403e1c, sub_403fa0, sub_403df8, sub_404280, sub_403010
// [被调用的父级函数]: sub_4dc090
// ============================================================

void** __convention("regparm")sub_4dbf70(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_1c
    __builtin_memset(&var_1c, 0, 0x18)
    int32_t ebx
    int32_t var_20 = ebx
    int32_t esi
    int32_t var_24 = esi
    int32_t edi
    int32_t var_28 = edi
    void* var_8 = arg1
    sub_40422c(var_8)
    int32_t* var_2c = &var_4
    int32_t (* var_30)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* var_10
    sub_403df8(&var_10)
    int32_t var_c
    int32_t i
    
    do
        void* eax_3
        int32_t edx_2
        eax_3, edx_2 = sub_406010(arg2 - 0x14c, &var_c:3)
        sub_402824(eax_3)
        edx_2.b = var_c:3.b
        sub_403fa0()
        char* var_14
        sub_404080(&var_10, var_14)
        int32_t eax_6 = sub_404078(var_10)
        int32_t eax_8 = sub_404078(var_8)
        i = eax_6 - eax_8
        
        if (add_overflow(eax_6, neg.d(eax_8)))
            sub_403010()
            noreturn
        
        if (add_overflow(i, 1))
            sub_403010()
            noreturn
        
        char* var_18
        sub_404280(sub_404078(var_8), i + 1, var_10, &var_18)
        sub_404188(var_18, var_8)
    while (i != 0xffffffff)
    void* eax_14
    int32_t edx_7
    eax_14, edx_7 = sub_406010(arg2 - 0x14c, &var_c:3)
    sub_402824(eax_14)
    edx_7.b = var_c:3.b
    sub_403fa0()
    void* eax_16
    int32_t edx_9
    eax_16, edx_9 = sub_406010(arg2 - 0x14c, &var_c:3)
    sub_402824(eax_16)
    edx_9.b = var_c:3.b
    sub_403fa0()
    sub_404080(&var_8, var_1c)
    sub_408e80(var_8)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_2c_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_4dc087
    sub_403e1c(&var_1c, 4)
    void** result = &var_8
    sub_403df8(result)
    return result
}
