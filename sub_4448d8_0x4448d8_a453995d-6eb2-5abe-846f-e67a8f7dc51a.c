// ============================================================
// 函数名称: sub_4448d8
// 虚拟地址: 0x4448d8
// WARP GUID: a453995d-6eb2-5abe-846f-e67a8f7dc51a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_403828, sub_444c90, sub_440ee0, sub_405ae8, sub_403df8, sub_40b4b0
// [被调用的父级函数]: sub_429f30, sub_444ce0, sub_4449d8, sub_444990, sub_442958
// ============================================================

char** __convention("regparm")sub_4448d8(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
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
    
    if (arg2 != arg1[0x82])
        if (arg2 != 0)
            if (arg1 == arg2)
            label_44492a:
                sub_405ae8(data_5308a8, &var_8)
                int32_t edx_1
                edx_1.b = 1
                sub_40b4b0(sub_40eacb+0x7d, edx_1, var_8)
                sub_403828()
                noreturn
            
            if (arg1 != sub_440ee0(arg2))
                goto label_44492a
            
            if ((arg1[8].b & 1) == 0)
                ebx.w = 0xffbc
                
                if (sub_4032ac(arg2) == 0)
                    goto label_44492a
        
        arg1[0x82] = arg2
        
        if ((arg1[8].b & 1) == 0)
            if (*(arg1 + 0x216) != 0)
                sub_444c90(arg1)
            
            ebx.w = 0xffb5
            sub_4032ac(arg1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_18_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_444987
    char** result = &var_8
    sub_403df8(result)
    return result
}
