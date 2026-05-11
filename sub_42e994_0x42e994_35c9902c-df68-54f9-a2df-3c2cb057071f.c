// ============================================================
// 函数名称: sub_42e994
// 虚拟地址: 0x42e994
// WARP GUID: 35c9902c-df68-54f9-a2df-3c2cb057071f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: LoadCursorA
// [内部子函数调用]: sub_402d00, sub_4318d0, sub_409474, sub_40401c, sub_42e92c, sub_40301c, sub_403df8
// [被调用的父级函数]: sub_44be74, sub_432ad8, sub_424338, sub_425d70, sub_4b2840, sub_4251a0, sub_441bb0
// ============================================================

void** __convention("regparm")sub_42e994(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10c = ebx
    int32_t esi
    int32_t var_110 = esi
    int32_t edi
    int32_t var_114 = edi
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
    int32_t* var_118 = &var_4
    int32_t (* var_11c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_402d00(arg2, 0x8c, 0)
    *arg2 = arg1[0x15]
    arg2[1] = 0x44000000
    sub_42e92c(arg1, &arg2[2])
    
    if ((arg1[0x10].b & 1) != 0)
        arg2[1] |= 0x2000000
        arg2[2] |= 0x10000
    
    if ((arg1[8].b & 0x10) == 0)
        esp_1 = &var_8
        
        if ((*(*arg1 + 0x4c))() == 0)
            arg2[1] |= 0x8000000
    
    if (arg1[0x5d].b != 0)
        arg2[1] |= 0x10000
    
    arg2[3] = arg1[0xc]
    arg2[4] = arg1[0xd]
    arg2[5] = arg1[0xe]
    arg2[6] = arg1[0xf]
    int32_t* edi_1 = arg1[9]
    
    if (edi_1 == 0)
        arg2[7] = arg1[0x59]
    else
        arg2[7] = sub_4318d0(edi_1)
    
    arg2[9] = 0xb
    arg2[0xa] = DefWindowProcA
    *(esp_1 - 4) = 0x7f00
    *(esp_1 - 8) = 0
    arg2[0xf] = LoadCursorA()
    arg2[0x10] = 0
    arg2[0xd] = data_5314dc
    char var_108[0x100]
    sub_40401c(sub_40301c(*arg1, &var_108), &var_108)
    sub_409474(&arg2[0x13], var_8)
    esp_1[2]
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[2] = sub_42eab9
    void** result = &var_8
    sub_403df8(result)
    return result
}
