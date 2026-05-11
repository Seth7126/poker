// ============================================================
// 函数名称: sub_4a6308
// 虚拟地址: 0x4a6308
// WARP GUID: 860b8927-7c05-5952-9e72-76e447552e7c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_403828, sub_402980, sub_49aef8, sub_404078, sub_49b788, sub_40423c, sub_405ae8, sub_40b4b0, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_4a6b54
// ============================================================

int32_t __convention("regparm")sub_4a6308(void* arg1, char* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_12c = ebx
    int32_t esi
    int32_t var_130 = esi
    int32_t edi
    int32_t var_134 = edi
    int32_t var_128
    __builtin_memset(&var_128, 0, 0x14)
    int32_t* var_138 = &var_4
    int32_t (* var_13c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char var_114 = 4
    char var_113 = 1
    int16_t var_112 = (*(**data_5308e0 + 0x34))(ExceptionList, var_13c, var_138)
    void* ebp_1
    
    if (*(arg1 + 0x74) != 2)
        char* var_118
        sub_49aef8(*data_5308e0, arg2, &var_118)
        int32_t* eax_10
        eax_10, ebp_1 = sub_49b788(*data_5308e0, var_118)
        *(ebp_1 - 0x10c) = eax_10
    else
        int32_t* eax_5
        eax_5, ebp_1 = sub_49b788(*data_5308e0, sub_4a653f+5)
        *(ebp_1 - 0x10c) = eax_5
    
    sub_404054(ebp_1 - 0x108, *(arg1 + 0x70), 0xff)
    int32_t ebx_2
    ebx_2.b = *(ebp_1 - 0x108)
    *(ebp_1 + ebx_2 - 0x107) = 0
    
    if (*(arg1 + 0x74) == 2)
        int32_t eax_13 = sub_404078(arg2)
        sub_402980(sub_40423c(arg2), ebp_1 + ebx_2 - 0x106, eax_13)
        int32_t eax_17 = sub_404078(arg2)
        
        if (add_overflow(ebx_2, 1))
            sub_403010()
            noreturn
        
        if (add_overflow(eax_17, ebx_2 + 1))
            sub_403010()
            noreturn
        
        ebx_2 = eax_17 + ebx_2 + 1
        *(ebp_1 + ebx_2 - 0x107) = 0
    
    if (add_overflow(ebx_2, 8))
        sub_403010()
        noreturn
    
    if (add_overflow(ebx_2 + 8, 1))
        sub_403010()
        noreturn
    
    (*(**(arg1 + 0x78) + 0x58))()
    (*(**(arg1 + 0x78) + 0x54))()
    char eax_21 = *(ebp_1 - 7)
    
    if (eax_21 == 0x5a)
        int32_t var_8
        fsbase->NtTib.ExceptionList = var_8
        __return_addr = sub_4a6533
        return sub_403e1c(ebp_1 - 0x124, 5)
    
    if (eax_21 == 0x5b)
        sub_405ae8(data_5304e4, ebp_1 - 0x118)
        int32_t edx_8
        edx_8.b = 1
        sub_40b4b0(sub_498dde+6, edx_8, *(ebp_1 - 0x118))
        sub_403828()
        noreturn
    
    if (eax_21 == 0x5c)
        sub_405ae8(data_5300cc, ebp_1 - 0x11c)
        int32_t edx_10
        edx_10.b = 1
        sub_40b4b0(sub_498dde+0x6a, edx_10, *(ebp_1 - 0x11c))
        sub_403828()
        noreturn
    
    if (eax_21 == 0x5d)
        sub_405ae8(data_530688, ebp_1 - 0x120)
        int32_t edx_12
        edx_12.b = 1
        sub_40b4b0(sub_498dde+0xd2, edx_12, *(ebp_1 - 0x120))
        sub_403828()
        noreturn
    
    sub_405ae8(data_530684, ebp_1 - 0x124)
    int32_t edx_14
    edx_14.b = 1
    sub_40b4b0(sub_498ed0+0x48, edx_14, *(ebp_1 - 0x124))
    sub_403828()
    noreturn
}
