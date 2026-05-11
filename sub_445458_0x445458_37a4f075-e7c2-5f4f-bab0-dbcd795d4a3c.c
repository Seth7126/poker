// ============================================================
// 函数名称: sub_445458
// 虚拟地址: 0x445458
// WARP GUID: 37a4f075-e7c2-5f4f-bab0-dbcd795d4a3c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetSubMenu
// [内部子函数调用]: sub_428bd4, sub_43ccd8, sub_403df8, sub_449b74
// [被调用的父级函数]: 无
// ============================================================

void** __convention("regparm")sub_445458(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(arg1 + 0x230) != 0)
        if (*(arg2 + 6) != 0xffff || *(arg2 + 4) != 0)
            if ((*(arg2 + 6) & 0x10) != 0)
                int32_t ebx_1
                ebx_1.b = 1
                GetSubMenu(*(arg2 + 8), zx.d(*(arg2 + 4)))
            
            sub_43ccd8(*(arg1 + 0x230))
        
        sub_449b74(data_5317d8, nullptr)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_18_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_4454fa
    void** result = &var_8
    sub_403df8(result)
    return result
}
