// ============================================================
// 函数名称: sub_508844
// 虚拟地址: 0x508844
// WARP GUID: b0b83761-285b-5569-aecf-dd1e8c6b30f4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4748fc, sub_507d4c, sub_40422c, sub_50d2f4, sub_478234, sub_514c48, sub_403df8, sub_403e1c
// [被调用的父级函数]: sub_509890, sub_50c5e0, sub_514ef8
// ============================================================

void** __convention("regparm")sub_508844(void* arg1, char arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_18 = ebx
    void* var_14 = nullptr
    void* var_10 = nullptr
    void* var_8 = arg1
    sub_40422c(var_8)
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD* var_34
    
    if (*(*data_530454 + 0x54) s> 1)
        *data_530454
        
        if (sub_50d2f4() != 0)
            int32_t var_28_2 = 0
            int32_t var_2c_2 = 0
            void* const var_30_2 = nullptr
            var_34 = nullptr
            esp = &var_34
            sub_507d4c(&var_14)
            sub_4748fc(*data_530304, var_8, var_14, var_34, var_30_2, var_2c_2)
            
            if (arg2 != 0)
                int32_t edx_4
                edx_4.b = 1
                sub_514c48(*data_530454)
                sub_478234(*data_530304, *data_530854, *data_52ff48)
    else
        if (var_8 != 0)
            int32_t var_28_1 = 0
            int32_t var_2c_1 = 0
            void* var_30_1 = nullptr
            var_34 = nullptr
            esp = &var_34
            sub_507d4c(&var_10)
            sub_4748fc(*data_530304, var_8, var_10, var_34, var_30_1, var_2c_1)
        
        sub_478234(*data_530304, *data_530438, *data_530184)
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_50894b
    sub_403e1c(&var_14, 2)
    void** result = &var_8
    sub_403df8(result)
    return result
}
