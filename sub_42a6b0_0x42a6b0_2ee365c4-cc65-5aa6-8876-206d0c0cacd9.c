// ============================================================
// 函数名称: sub_42a6b0
// 虚拟地址: 0x42a6b0
// WARP GUID: 2ee365c4-cc65-5aa6-8876-206d0c0cacd9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_403248, sub_403e4c, sub_439258, sub_403df8, sub_409ae0
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_42a6b0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_24 = ebx
    int32_t esi
    int32_t var_28 = esi
    int32_t edi
    int32_t var_2c = edi
    void* var_c = nullptr
    int32_t var_20 = 0
    int32_t* var_30 = &var_4
    int32_t (* var_34)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char var_5 = 1
    
    if (sub_403248(*(arg1 + 0x10), &data_436278) != 0)
        ebx.w = 0xffef
        void var_8
        esp = &var_8
        
        if (sub_4032ac(*(arg1 + 0x10), arg2, 0) != 0 && *(*data_530660 + 0x6c) != 0
                && *(*(arg1 + 0x10) + 0x68) != 0 && *arg2 != 0)
            var_c = &var_c
            int32_t var_1c_1 = *arg2
            char var_18_1 = 0xb
            void* eax_8
            eax_8.w = *(*(arg1 + 0x10) + 0x68)
            ebp_1 = sub_439258(eax_8.w, &var_20)
            ebp_1[-4] = ebp_1[-7]
            ebp_1[-3].b = 0xb
            sub_409ae0(1, &ebp_1[-6], sub_42a78b+5, var_c)
            esp = &var_8
            sub_403e4c(arg2, ebp_1[-2])
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_42a77e
    sub_403df8(&ebp_1[-7])
    sub_403df8(&ebp_1[-2])
    return &ebp_1[-2]
}
