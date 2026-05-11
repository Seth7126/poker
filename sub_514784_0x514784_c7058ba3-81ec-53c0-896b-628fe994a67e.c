// ============================================================
// 函数名称: sub_514784
// 虚拟地址: 0x514784
// WARP GUID: c7058ba3-81ec-53c0-896b-628fe994a67e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_50d52c, sub_515920, sub_403df8, sub_402bdc, sub_514738, sub_50abec, sub_403010
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_514784(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_194 = ebx
    int32_t esi
    int32_t var_198 = esi
    int32_t edi
    int32_t var_19c = edi
    int32_t var_190 = 0
    int32_t* var_1a0 = &var_4
    int32_t (* var_1a4)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    void var_8c
    sub_50d52c(0, &var_8c)
    int32_t* var_1ac = &var_4
    int32_t (* var_1b0)() = j_sub_40353c
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char var_88 = 7
    char var_85 = 7
    char var_86 = 3
    char var_87 = 4
    char var_84 = (*(arg1 + 0x54)).b
    int32_t var_70 = sub_514738(&var_4)
    int32_t* ebx_2
    void* ebp_1
    ebx_2, ebp_1 = sub_50abec(&var_190, esi, edi)
    sub_404054(ebp_1 - 0x188, *(ebp_1 - 0x18c), 0xff)
    sub_402bdc(ebp_1 - 0x64, ebp_1 - 0x188, 0x40)
    void* edx_4 = *(ebp_1 - 4)
    *(edx_4 + 0x350)
    bool o = unimplemented  {imul edx, dword [edx+0x350], 0xe9}
    
    if (o)
        sub_403010()
        noreturn
    
    int32_t ecx_2
    ecx_2.b = 0x12
    sub_402bdc(ebp_1 - 0x23, *(ebp_1 - 4) + *(edx_4 + 0x350) * 0x3a4 - 0x4f, ecx_2.b)
    sub_515920(*(ebp_1 - 4), ebp_1 - 0x88, ebx_2)
    int32_t var_14
    fsbase->NtTib.ExceptionList = var_14
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = &data_514894
    sub_403df8(ebp_1 - 0x18c)
    return ebp_1 - 0x18c
}
