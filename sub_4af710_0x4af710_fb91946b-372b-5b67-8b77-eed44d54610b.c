// ============================================================
// 函数名称: sub_4af710
// 虚拟地址: 0x4af710
// WARP GUID: fb91946b-372b-5b67-8b77-eed44d54610b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403248, sub_404078, sub_4ae168, sub_49f714, sub_403df8
// [被调用的父级函数]: sub_4b1304
// ============================================================

void* __convention("regparm")sub_4af710(void* arg1, int32_t arg2, struct _EXCEPTION_REGISTRATION_RECORD* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t edi
    int32_t var_18 = edi
    int32_t var_c = 0
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg3
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* esi_1 = *(arg1 + 0xe0)
    
    if (esi_1 != 0)
        int32_t* var_28_1 = &var_c
        ebp_1 = sub_4ae168(esi_1, arg2, sub_403248(*(arg1 + 0x74), 0x4a9e20))
        esp = &var_8
        
        if (sub_404078(ebp_1[-2]) s> 0)
            sub_49f714(*(ebp_1[-1] + 8), sub_4af7a3+5, ebp_1[-2])
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4af796
    sub_403df8(&ebp_1[-2])
    return &ebp_1[-2]
}
