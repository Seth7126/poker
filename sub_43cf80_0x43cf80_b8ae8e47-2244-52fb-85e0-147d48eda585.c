// ============================================================
// 函数名称: sub_43cf80
// 虚拟地址: 0x43cf80
// WARP GUID: b8ae8e47-2244-52fb-85e0-147d48eda585
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetKeyState
// [内部子函数调用]: sub_43ccd8, sub_420078, sub_420070, sub_43ce2c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_43cf80(void* arg1, void* arg2)
{
    // 第一条实际指令: int16_t eax
    int16_t eax
    eax.b = *(arg2 + 4)
    int16_t var_a = eax
    
    if (GetKeyState(0x10) s< 0)
        var_a += 0x2000
    
    int16_t eax_2
    int32_t ecx
    eax_2, ecx = GetKeyState(0x11)
    
    if (eax_2 s< 0)
        var_a += 0x4000
    
    if ((*(arg2 + 0xb) & 0x20) != 0)
        var_a -= 0x8000
    
    int32_t var_8
    int32_t result
    char i
    
    do
        i = 0
        ecx.b = 2
        result, ecx = sub_43ccd8(arg1)
        var_8 = 0
        
        if (var_8 != 0)
            void* ecx_1 = sub_420078(data_5317cc)
            int32_t __saved_ebp
            int32_t* var_1c_2 = &__saved_ebp
            int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
            TEB* fsbase
            struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList
            int32_t* var_28 = &__saved_ebp
            char var_11_1 = sub_43ce2c(&var_8, 0, ecx_1)
            fsbase->NtTib.ExceptionList = ExceptionList
            int32_t var_1c_3 = 0x43d029
            return sub_420070(data_5317cc)
    while (i == 2)
    result.b = var_8 != 0
    return result
}
