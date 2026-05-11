// ============================================================
// 函数名称: sub_4110a0
// 虚拟地址: 0x4110a0
// WARP GUID: dbfc0e2d-9845-5512-9933-8a6d0100ea19
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_404138, sub_40401c, sub_411168, sub_40301c, sub_403e1c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4110a0(void** arg1, char** arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_110 = ebx
    int32_t esi
    int32_t var_114 = esi
    int32_t edi
    int32_t var_118 = edi
    int32_t var_8 = 0
    int32_t var_c = 0
    int32_t* var_11c = &var_4
    int32_t (* var_120)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char var_10c[0x100]
    sub_40401c(sub_40301c(*arg1, &var_10c), &var_10c)
    ebx.w = 0xffff
    
    if (sub_4032ac(arg1) != 0)
        ebx.w = 0xffff
        ebx.w = 0xfffe
        sub_4032ac(sub_4032ac(arg1), &var_8)
        
        if (var_8 != 0)
            ebp_1 = sub_411168(arg1, &var_c)
            
            if (ebp_1[-2] != 0)
                int32_t var_128_1 = ebp_1[-1]
                void* const var_12c_1 = &data_411164
                int32_t var_130_1 = ebp_1[-2]
                sub_404138(arg2, 3)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_11c_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_411155
    return sub_403e1c(&ebp_1[-2], 2)
}
