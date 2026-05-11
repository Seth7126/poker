// ============================================================
// 函数名称: sub_5148a0
// 虚拟地址: 0x5148a0
// WARP GUID: a494743c-18d3-56ab-b64f-cec883e13dc7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_50d52c, sub_515920, sub_403df8, sub_402bdc, sub_50abec
// [被调用的父级函数]: sub_4e6659, sub_50c5e0, sub_514ef8, sub_4e649b
// ============================================================

void* __convention("regparm")sub_5148a0(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_190 = ebx
    int32_t esi
    int32_t var_194 = esi
    int32_t edi
    int32_t var_198 = edi
    int32_t var_18c = 0
    int32_t* var_19c = &var_4
    int32_t (* var_1a0)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    void var_88
    int32_t ecx
    sub_50d52c(ecx, &var_88)
    int32_t* var_1a8 = &var_4
    int32_t (* var_1ac)() = j_sub_40353c
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char var_84 = 7
    char var_81 = 1
    char var_82 = 0
    char var_83 = 4
    char var_7f = (*(arg1 + 0x350)).b
    void* ebx_2
    void* ebp_1
    ebx_2, ebp_1 = sub_50abec(&var_18c, esi, edi)
    sub_404054(ebp_1 - 0x184, *(ebp_1 - 0x188), 0xff)
    sub_402bdc(ebp_1 - 0x60, ebp_1 - 0x184, 0x40)
    sub_515920(ebx_2, ebp_1 - 0x84, nullptr)
    int32_t var_14
    fsbase->NtTib.ExceptionList = var_14
    int32_t var_8
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_514970
    sub_403df8(ebp_1 - 0x188)
    return ebp_1 - 0x188
}
