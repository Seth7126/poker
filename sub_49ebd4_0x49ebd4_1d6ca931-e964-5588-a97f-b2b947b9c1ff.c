// ============================================================
// 函数名称: sub_49ebd4
// 虚拟地址: 0x49ebd4
// WARP GUID: 1d6ca931-e964-5588-a97f-b2b947b9c1ff
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e4c, sub_4054f4, sub_49db84, sub_403df8, sub_402ee0
// [被调用的父级函数]: 无
// ============================================================

void*sub_49ebd4()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
    int32_t* var_c = &var_4
    int32_t (* var_10)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t temp0 = data_5324dc
    data_5324dc -= 1
    
    if (temp0 u< 1)
        ebp_1 = sub_49db84(&var_8)
        sub_403e4c(0x5324e4, ebp_1[-1])
        *data_530768 = 0x49b8d8
        sub_402ee0(data_530a44, 0x49ecb4, 0x20)
        
        if (temp0 != 1)
            data_52fba0 = sub_40c024
        else
            data_52fba0 = sub_49e604
        
        int32_t var_c_1 = 1
        sub_4054f4()
        sub_403e4c(data_5324d4, "FALSE")
        int32_t var_c_2 = 1
        sub_4054f4()
        esp = &var_8
        sub_403e4c(data_5324d8, "TRUE")
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_49ecae
    sub_403df8(&ebp_1[-1])
    return &ebp_1[-1]
}
