// ============================================================
// 函数名称: sub_4a8988
// 虚拟地址: 0x4a8988
// WARP GUID: da471e1b-5431-54ab-a1ac-444978a7cfbe
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4040c4, sub_404078, sub_4a5d10, sub_408ad8, sub_40cc98, sub_4030a0, sub_4a7bf0, sub_404280
// [被调用的父级函数]: sub_4a758c
// ============================================================

int32_t __convention("regparm")sub_4a8988(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_18
    __builtin_memset(&var_18, 0, 0x14)
    int32_t ebx
    int32_t var_1c = ebx
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t edx
    edx.b = 1
    int32_t var_c = sub_4030a0(0, edx)
    int32_t* var_c_1 = &var_4
    int32_t (* var_10)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int32_t var_8
    int32_t* ebx_2
    void* ebp_1
    ebx_2, ebp_1 = sub_4a7bf0(arg1, 0x7fffffff, &var_8)
    *(ebp_1 - 4)
    (*(**(ebp_1 - 8) + 0x34))(ExceptionList_1, var_10, var_c_1)
    
    if (sub_404078(*(ebp_1 - 4)) s> 3 && *(*(ebp_1 - 4) + 3) == 0x2d)
        sub_404280(3, 1, *(ebp_1 - 4), ebp_1 - 0x10)
        sub_4040c4(ebp_1 - 0xc, *(ebp_1 - 0x10), sub_4a8abf+5)
        char i
        
        do
            ebx_2, ebp_1 = sub_4a7bf0(ebx_2, 0x7fffffff, ebp_1 - 4)
            *(ebp_1 - 4)
            (*(**(ebp_1 - 8) + 0x34))()
            
            if (sub_404078(*(ebp_1 - 4)) s< 4)
                break
            
            sub_404280(4, 1, *(ebp_1 - 4), ebp_1 - 0x14)
            i = sub_408ad8(*(ebp_1 - 0x14), *(ebp_1 - 0xc))
        while (i == 0)
    
    int32_t esi
    int32_t edi
    void* ebp_2 = sub_4a5d10(ebx_2[0x1e], *(ebp_1 - 8), esi, edi)
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_4a8a8a
    return sub_40cc98(ebp_2 - 8)
}
