// ============================================================
// 函数名称: sub_4257e4
// 虚拟地址: 0x4257e4
// WARP GUID: f978a5f1-a610-58d4-b54a-5fc5a0930cb5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_4115f8, sub_4116b4
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4257e4(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t edi
    int32_t var_1c = edi
    int32_t var_10 = 0
    int32_t* var_8 = arg1
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    sub_4115f8(var_8)
    *(var_8[3] + 0x230) = 1
    int32_t* var_2c = &var_4
    int32_t (* var_30)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg3 != arg2)
        (*(*var_8 + 0xc))()
        esp = &var_8
        int32_t ebx_1
        ebx_1.w = 0xffb6
        int32_t eax_6 = sub_4032ac(var_8[3], arg2)
        ebx_1.w = 0xffb5
        sub_4032ac(var_8[3], arg2, 0)
        (*(*var_8 + 0x44))()
        (*(*var_8 + 0x54))()
        int32_t ebx_2
        ebx_2.w = 0xffb5
        sub_4032ac(var_8[3], arg3, eax_6)
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4258b7
    *(var_8[3] + 0x230) = 0
    return sub_4116b4(var_8)
}
