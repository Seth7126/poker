// ============================================================
// 函数名称: sub_44b940
// 虚拟地址: 0x44b940
// WARP GUID: e0390692-ff90-5827-9bd2-9914721dba43
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_44b8a0, sub_419820, sub_4191d8, sub_418eb4, sub_419868
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_44b940(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_20 = ebx
    
    if ((arg1[8].b & 0x10) != 0)
        int32_t* ebx_1 = arg1[0x48]
        int32_t edx
        edx.b = 1
        sub_418eb4(ebx_1[4])
        sub_4191d8(ebx_1[5], 1)
        sub_419820(0, 0, ebx_1, arg1[0xf], arg1[0xe])
    
    int32_t* eax_9
    eax_9.b = arg1[0x4f].b
    char var_9 = eax_9.b
    arg1[0x4f].b = 1
    int32_t* var_24_2 = &var_4
    int32_t (* var_28_2)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* ebx_2 = arg1[0x48]
    void var_1c
    sub_44b8a0(arg1, &var_1c)
    sub_419868(ebx_2, &var_1c, *(arg1[0x4a] + 4))
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_24_3)(int32_t* arg1 @ ebp) = sub_44b9f8
    struct _EXCEPTION_REGISTRATION_RECORD* edx_4
    edx_4.b = var_9
    arg1[0x4f].b = edx_4.b
    return arg1
}
