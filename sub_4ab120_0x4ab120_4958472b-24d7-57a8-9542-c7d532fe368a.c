// ============================================================
// 函数名称: sub_4ab120
// 虚拟地址: 0x4ab120
// WARP GUID: 4958472b-24d7-57a8-9542-c7d532fe368a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_405ae8, sub_40b4b0, sub_403df8
// [被调用的父级函数]: sub_4af7a3, sub_4b008c, sub_4af7b0
// ============================================================

struct _EXCEPTION_REGISTRATION_RECORD** __convention("regparm")sub_4ab120(int32_t* arg1, char arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg2 == 0)
        esp = &var_8
        
        if ((*(*arg1 + 0x48))() != 0)
            if (arg1[0x1e] == 0)
                sub_405ae8(data_530358, &var_8)
                int32_t edx_3
                edx_3.b = 1
                sub_40b4b0(sub_4aa278+0x48, edx_3, var_8)
                sub_403828()
                noreturn
            
            (*(*arg1 + 0x74))()
    
    arg1[0x2c].b = arg2
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4ab19b
    struct _EXCEPTION_REGISTRATION_RECORD** result = &var_8
    sub_403df8(result)
    return result
}
