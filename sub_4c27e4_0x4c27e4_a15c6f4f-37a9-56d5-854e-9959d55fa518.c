// ============================================================
// 函数名称: sub_4c27e4
// 虚拟地址: 0x4c27e4
// WARP GUID: a15c6f4f-37a9-56d5-854e-9959d55fa518
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_4748fc, sub_4c2ca0, sub_404138, sub_402b4c, sub_408e1c, sub_404080, sub_4c2de8, sub_52b2f0, sub_4c02cc, sub_4bdac0, sub_403df8, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

void*sub_4c27e4(int32_t arg1 @ esi, int32_t arg2 @ edi, long double arg3 @ st0, long double arg4 @ st1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_2 = &var_4
    int32_t i_1 = 0xa
    int32_t i
    
    do
        *(esp_2 - 4) = 0
        *(esp_2 - 8) = 0
        esp_2 -= 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    int32_t entry_ebx
    *(esp_2 - 4) = entry_ebx
    *(esp_2 - 8) = arg1
    *(esp_2 - 0xc) = arg2
    *(esp_2 - 0x10) = &var_4
    *(esp_2 - 0x14) = j_sub_4037f0
    TEB* fsbase
    *(esp_2 - 0x18) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_2 - 0x18
    int32_t var_14
    sub_403df8(&var_14)
    int32_t eax_1 = sub_4c2ca0()
    
    if (add_overflow(eax_1, 0xffffffff))
        sub_403010()
        noreturn
    
    int32_t eax_2 = sub_4c2de8(0)
    
    if (add_overflow(eax_2, 0xffffffff))
        sub_403010()
        noreturn
    
    uint32_t eax_3 = GetTickCount()
    sub_4bdac0(*(*data_5301f4 + 0x10020), eax_1 - 1)
    float var_c = fconvert.s(arg3)
    sub_4bdac0(*(*data_5301f4 + 0x10020), eax_2 - 1)
    float var_10 = fconvert.s(arg4)
    uint32_t eax_10 = GetTickCount()
    *(esp_2 - 0x1c) = 0
    *(esp_2 - 0x20) = eax_10
    int32_t eax_12
    int32_t edx_2
    edx_2:eax_12 = sx.q(eax_3)
    int32_t temp3 = *(esp_2 - 0x20)
    *(esp_2 - 0x20) -= eax_12
    *(esp_2 - 0x1c) = sbb.d(*(esp_2 - 0x1c), edx_2, temp3 u< eax_12)
    int32_t eax_13 = *(esp_2 - 0x20)
    *(esp_2 - 0x1c) = var_14
    *(esp_2 - 0x20) = &data_4c2aac
    *(esp_2 - 0x24) = "GETWKT2.1: "
    int32_t var_30
    sub_408e1c(eax_1 - 1, &var_30)
    *(esp_2 - 0x28) = var_30
    *(esp_2 - 0x2c) = &data_4c2acc
    void var_34
    *(esp_2 - 0x30) = &var_34
    void* ebp_1
    int32_t esi_2
    ebp_1, esi_2 = sub_52b2f0(sub_402b4c(fconvert.t(var_c) * fconvert.t(10000f)), 0x2710, 2)
    *(esp_2 - 0x1c) = *(ebp_1 - 0x30)
    sub_404138(ebp_1 - 0x10, 6)
    *(esp_2 - 0x1c) = *(ebp_1 - 0x10)
    *(esp_2 - 0x20) = &data_4c2aac
    *(esp_2 - 0x24) = "GETWKT2.2: "
    sub_408e1c(esi_2, ebp_1 - 0x34)
    *(esp_2 - 0x28) = *(ebp_1 - 0x34)
    *(esp_2 - 0x2c) = &data_4c2acc
    *(esp_2 - 0x30) = ebp_1 - 0x38
    int32_t ebx_2
    void* ebp_2
    int32_t esi_3
    ebx_2, ebp_2, esi_3 =
        sub_52b2f0(sub_402b4c(fconvert.t(*(ebp_1 - 0xc)) * fconvert.t(10000f)), 0x2710, 2)
    void* esp_18
    *(esp_18 + 0x14) = *(ebp_2 - 0x38)
    sub_404138(ebp_2 - 0x10, 6)
    *(esp_18 + 0x14) = *(ebp_2 - 0x10)
    *(esp_18 + 0x10) = &data_4c2aac
    sub_408e1c(eax_13, ebp_2 - 0x3c)
    *(esp_18 + 0xc) = *(ebp_2 - 0x3c)
    *(esp_18 + 8) = &data_4c2af0
    void* esp_34 = esp_18 + 8
    sub_404138(ebp_2 - 0x10, 4)
    sub_404080(ebp_2 - 0x10, "\n\r")
    uint32_t eax_24 = GetTickCount()
    *esp_34 = 0
    *(esp_34 - 4) = ebp_2 - 0x28
    sub_4c02cc(esi_3, ebx_2, *(*data_5301f4 + 0x10020))
    uint32_t eax_29 = GetTickCount()
    *esp_34 = 0
    *(esp_34 - 4) = eax_29
    int32_t eax_31
    int32_t edx_9
    edx_9:eax_31 = sx.q(eax_24)
    int32_t temp4 = *(esp_34 - 4)
    *(esp_34 - 4) -= eax_31
    *esp_34 = sbb.d(*esp_34, edx_9, temp4 u< eax_31)
    int32_t eax_32 = *(esp_34 - 4)
    *esp_34 = *(ebp_2 - 0x10)
    *(esp_34 - 4) = &data_4c2aac
    *(esp_34 - 8) = "GETWKT3.1: "
    sub_408e1c(ebx_2, ebp_2 - 0x40)
    *(esp_34 - 0xc) = *(ebp_2 - 0x40)
    *(esp_34 - 0x10) = &data_4c2acc
    *(esp_34 - 0x14) = ebp_2 - 0x44
    void* ebp_3
    int32_t esi_4
    ebp_3, esi_4 = sub_52b2f0(sub_402b4c(fconvert.t(*(ebp_2 - 0x28)) * fconvert.t(10000f)), 0x2710, 2)
    *esp_34 = *(ebp_3 - 0x44)
    sub_404138(ebp_3 - 0x10, 6)
    void* esp_50
    *esp_50 = *(ebp_3 - 0x10)
    *(esp_34 - 4) = &data_4c2aac
    *(esp_50 - 8) = "GETWKT3.2: "
    sub_408e1c(esi_4, ebp_3 - 0x48)
    *(esp_50 - 0xc) = *(ebp_3 - 0x48)
    *(esp_50 - 0x10) = &data_4c2acc
    *(esp_50 - 0x14) = ebp_3 - 0x4c
    void* ebp_4 = sub_52b2f0(sub_402b4c(fconvert.t(*(ebp_3 - 0x20)) * fconvert.t(10000f)), 0x2710, 2)
    *esp_50 = *(ebp_4 - 0x4c)
    sub_404138(ebp_4 - 0x10, 6)
    *esp_50 = *(ebp_4 - 0x10)
    *(esp_50 - 4) = &data_4c2aac
    sub_408e1c(eax_32, ebp_4 - 0x50)
    *(esp_50 - 8) = *(ebp_4 - 0x50)
    *(esp_50 - 0xc) = &data_4c2af0
    sub_404138(ebp_4 - 0x10, 4)
    *(esp_50 - 0xc) = 0
    *(esp_50 - 0x10) = 0
    *(esp_50 - 0x14) = 0
    *(esp_50 - 0x18) = 0
    sub_4748fc(*data_530304, *(ebp_4 - 0x10), 0)
    void* esp_70 = esp_50 - 0x14
    *(esp_70 + 4)
    fsbase->NtTib.ExceptionList = *(esp_50 - 0x18)
    *(esp_70 + 4) = sub_4c2a9a
    sub_403e1c(ebp_4 - 0x50, 0xa)
    sub_403df8(ebp_4 - 0x10)
    return ebp_4 - 0x10
}
