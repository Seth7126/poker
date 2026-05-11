// ============================================================
// 函数名称: sub_4394b8
// 虚拟地址: 0x4394b8
// WARP GUID: a30398e0-4767-5b6c-8472-6aed7e50fc55
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40422c, sub_43945c, sub_439258, sub_408aa0, sub_403e1c
// [被调用的父级函数]: sub_439e78
// ============================================================

int32_t __convention("regparm")sub_4394b8(void* arg1)
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
    void* var_8 = arg1
    sub_40422c(var_8)
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int16_t esi_1 = 0
    
    while (true)
        if (sub_43945c(&var_8, data_52e8dc) == 0)
            if (sub_43945c(&var_8, sub_4395a7+5) == 0)
                if (sub_43945c(&var_8, data_52e8e0) == 0)
                    if (sub_43945c(&var_8, data_52e8e4) == 0)
                        break
                    
                    esi_1 |= 0x8000
                else
                    esi_1 |= 0x4000
            else
                esi_1 |= 0x4000
        else
            esi_1 |= 0x2000
    
    if (var_8 != 0)
        ebx.w = 8
        
        do
            int16_t esi_2
            ebp_1, esi_2 = sub_439258(ebx.w, &ebp_1[-2])
            
            if (sub_408aa0(ebp_1[-1], ebp_1[-2]) == 0)
                break
            
            ebx += 1
        while (ebx.w != 0x256)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_1c_1)(int32_t arg1 @ edi, int32_t arg2, int32_t arg3, int32_t arg4, 
        int32_t arg5) = sub_43959a
    return sub_403e1c(&ebp_1[-2], 2)
}
