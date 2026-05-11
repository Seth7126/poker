// ============================================================
// 函数名称: sub_42b01c
// 虚拟地址: 0x42b01c
// WARP GUID: 8411b7ba-3d86-5d2c-9da0-23286b403fce
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4103c8, sub_4032ac, sub_4106bc
// [被调用的父级函数]: sub_4439d4
// ============================================================

int32_t* __convention("regparm")sub_42b01c(int32_t* arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_1c = ebx
    int32_t esi
    int32_t var_20 = esi
    int32_t edi
    int32_t var_24 = edi
    void var_18
    __builtin_memcpy(&var_18, arg3, 0x10)
    
    if (arg2 != arg1[0x24])
        void* eax_2 = arg1[0x24]
        
        if (eax_2 != 0 && *(eax_2 + 0x140) != 0)
            sub_4106bc(*(eax_2 + 0x140))
        
        if (arg2 != 0 && arg2 != 0xffffffff && arg2[0x50] != 0)
            sub_4103c8(arg2[0x50], arg1)
    
    arg1[0x11].w |= 0x400
    int32_t* var_28 = &var_4
    int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg2 != 0xffffffff)
        ebx.w = 0xffe6
        sub_4032ac(arg1, arg2, &var_18)
    
    int32_t* eax_8 = arg1[0x24]
    
    if (arg2 != eax_8)
        if (arg2 == 0xffffffff)
            arg1[0x24] = 0
        else
            arg1[0x24] = arg2
            
            if (arg2 != 0)
                ebx.w = 0xffcc
                sub_4032ac(arg2, arg1, &var_18)
        
        if (eax_8 != 0)
            ebx.w = 0xffc3
            sub_4032ac(eax_8, arg1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    var_28 = sub_42b121
    arg1[0x11].w &= 0xfbff
    return arg1
}
