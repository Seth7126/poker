// ============================================================
// 函数名称: sub_4dc090
// 虚拟地址: 0x4dc090
// WARP GUID: cc170765-2984-5eb3-b3ef-3711baa337b9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4dbf70, sub_404138, sub_402824, sub_4f0cf0, sub_4062e1, sub_4c94dc, sub_403df8, sub_405e46, sub_405f4c
// [被调用的父级函数]: sub_4dc3b8
// ============================================================

void*sub_4dc090()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_158 = ebx
    int32_t esi
    int32_t var_15c = esi
    char* var_154 = nullptr
    int32_t* var_160 = &var_4
    int32_t (* var_164)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_16c = *(data_61c8c8 + 0xa64)
    void* const var_170 = "\data\bilder"
    int32_t var_174 = data_61d4c0
    void* const var_178 = "\param.txt"
    sub_404138(&var_154, 4)
    void var_150
    sub_405e46(&var_150, var_154)
    int32_t eax_3
    void* edx_2
    eax_3, edx_2 = sub_4062e1()
    sub_402824(eax_3)
    int32_t* var_c = &var_4
    void** eax_4
    int32_t ebp_1
    eax_4, ebp_1 = sub_4dbf70("rund=", edx_2)
    data_61d488 = eax_4
    data_61d100 = divs.dp.d(sx.q(eax_4), 0xa)
    int32_t temp1 = mods.dp.d(sx.q(data_61d488), 0xa)
    data_61d488 = temp1
    sub_4c94dc()
    int32_t var_c_1 = ebp_1
    void** eax_11
    void* edx_6
    int32_t ebp_2
    eax_11, edx_6, ebp_2 = sub_4dbf70("reflection=", temp1)
    data_61d48c = eax_11
    int32_t var_c_2 = ebp_2
    void** eax_12
    void* edx_7
    int32_t ebp_3
    eax_12, edx_7, ebp_3 = sub_4dbf70("tbreite=", edx_6)
    data_61d494 = eax_12
    int32_t var_c_3 = ebp_3
    void** eax_13
    void* edx_8
    int32_t ebp_4
    eax_13, edx_8, ebp_4 = sub_4dbf70("thoehe=", edx_7)
    data_61d498 = eax_13
    int32_t var_c_4 = ebp_4
    void** eax_14
    void* edx_9
    int32_t ebp_5
    eax_14, edx_9, ebp_5 = sub_4dbf70("kbreite=", edx_8)
    data_61d49c = eax_14
    int32_t var_c_5 = ebp_5
    void** eax_15
    void* edx_10
    int32_t ebp_6
    eax_15, edx_10, ebp_6 = sub_4dbf70("bbreite=", edx_9)
    data_61d4a0 = eax_15
    int32_t var_c_6 = ebp_6
    void** eax_16
    void* edx_11
    int32_t ebp_7
    eax_16, edx_11, ebp_7 = sub_4dbf70("bhoehe=", edx_10)
    data_61d4a4 = eax_16
    int32_t var_c_7 = ebp_7
    void** eax_17
    void* edx_12
    int32_t ebp_8
    eax_17, edx_12, ebp_8 = sub_4dbf70("blight=", edx_11)
    data_61d4b4 = eax_17
    int32_t var_c_8 = ebp_8
    void** eax_18
    void* edx_13
    int32_t ebp_9
    eax_18, edx_13, ebp_9 = sub_4dbf70("wbreite=", edx_12)
    data_61d4a8 = eax_18
    int32_t var_c_9 = ebp_9
    void** eax_19
    void* edx_14
    int32_t ebp_10
    eax_19, edx_14, ebp_10 = sub_4dbf70("whoehe=", edx_13)
    data_61d4ac = eax_19
    int32_t var_c_10 = ebp_10
    void** eax_20
    void* edx_15
    int32_t ebp_11
    eax_20, edx_15, ebp_11 = sub_4dbf70("wlight=", edx_14)
    data_61d4b0 = eax_20
    int32_t var_c_11 = ebp_11
    void** eax_21
    void* edx_16
    int32_t ebp_12
    eax_21, edx_16, ebp_12 = sub_4dbf70("gray=", edx_15)
    data_61d4b8 = eax_21
    int32_t var_c_12 = ebp_12
    void** eax_22
    void* edx_17
    int32_t ebp_13
    eax_22, edx_17, ebp_13 = sub_4dbf70("transparenz=", edx_16)
    data_61d4bc = eax_22
    int32_t var_c_13 = ebp_13
    void** eax_23
    void* ebp_14
    eax_23, ebp_14 = sub_4dbf70("ref_weg=", edx_17)
    data_61d490 = eax_23
    int32_t eax_24 = data_61d480
    int32_t eax_25
    
    if (eax_24 == 5 || eax_24 == 8)
        eax_25.b = 1
    else
        eax_25 = 0
    
    eax_25.b ^= 1
    data_61d4c5 = eax_25.b
    sub_4f0cf0(data_61d4b8)
    sub_402824(sub_405f4c(ebp_14 - 0x14c))
    int32_t var_8
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_4dc284
    sub_403df8(ebp_14 - 0x150)
    return ebp_14 - 0x150
}
